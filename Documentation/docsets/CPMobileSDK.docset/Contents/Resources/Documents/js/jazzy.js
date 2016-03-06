window.jazzy = {'docset': false}
if (typeof window.dash != 'undefined') {
  document.documentElement.className += ' dash'
  window.jazzy.docset = true
}
if (navigator.userAgent.match(/xcode/i)) {
  document.documentElement.className += ' xcode'
  window.jazzy.docset = true
}

// On doc load, toggle the URL hash discussion if present
$(document).ready(function() {
  if (!window.jazzy.docset) {
    var linkToHash = $('a[href="' + window.location.hash +'"]');
    triggerLink(linkToHash, 0);
  }

  $(window).on('hashchange', function() {
    var linkToHash = $('a[href="' + window.location.hash +'"]');
      triggerLink(linkToHash, 0);
  });
});

// On token click, toggle its discussion and animate token.marginLeft
$(".token").click(function(event) {
  if (window.jazzy.docset) {
    return;
  }
  triggerLink($(this), 300);
});

// On section-name-container click, toggle its discussion and animate section-name-container.marginLeft
$(".section-name-container").click(function(event) {
  if (window.jazzy.docset) {
    return;
  }
  triggerLink($(this), 300);
});

function triggerLink(link, animationDuration)
{
  var tokenOffset = "15px";
  var original = link.css('marginLeft') == tokenOffset;
  // link.animate({'margin-left':original ? "0px" : tokenOffset}, animationDuration);
  console.log(link);
  if($(link).find(".section-name").length == 0)
  {
    $content = link.parent().parent().next();
    $content.slideToggle(animationDuration);
  }
  else
  {
    var tokens = $(link).parents(".task-group").find(".token");
    for (var i = 0; i < tokens.length; i++) {
      tokens[i].click();
    }
  }

  // Keeps the document from jumping to the hash.
  var href = $(link).attr('href');
  if (history.pushState) {
    try {
      history.pushState({}, '', href); 
    }
    catch(e) {}
  } else {
    location.hash = href;
  }

  event.preventDefault();
}