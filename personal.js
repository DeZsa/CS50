document.addEventListener("DOMContentLoaded", function() {
	var body = document.getElementsByTagName('body')[0];

	var iframe = document.createElement('iframe');
	iframe.setAttribute('src', 'https://DSmith.kartra.com/page/XFr37');
	iframe.setAttribute('style', 'width:100%;height:100%;position:absolute; top:0px; left:0px; border:none;');
	iframe.setAttribute('scrolling', 'yes');
	iframe.setAttribute('allowfullscreen', 'yes');

	var head = document.getElementsByTagName('head')[0];

	var viewport = document.createElement('meta');
	viewport.setAttribute('name', 'viewport');
	viewport.setAttribute('content', 'width=device-width, initial-scale=1.0');
	head.appendChild(viewport);

	window.addEventListener('message', function(event) {

		if (event.data.title) {
			var title = document.getElementsByTagName('title');

			if (title.length > 0) {
				title[0].innerHTML = event.data.title;
			} else {
				title = document.createElement('title');
				title.innerHTML = event.data.title;
				head.appendChild(title);
			}
		}

		if (event.data.description) {
			var description = document.getElementsByName('description');

			if (description.length > 0) {
				description[0].content = event.data.description;
			} else {
				description = document.createElement('meta');
				description.setAttribute('name', 'description');
				description.setAttribute('content', event.data.description);
				head.appendChild(description);
			}
		}

		if (event.data.keywords) {
			var keywords = document.getElementsByName('keywords');

			if (keywords.length > 0) {
				keywords[0].content = event.data.description;
			} else {
				keywords = document.createElement('meta');
				keywords.setAttribute('name', 'keywords');
				keywords.setAttribute('content', event.data.keywords);
				head.appendChild(keywords);
			}
		}

		if (event.data.domain) {
			var favicon = document.createElement('link');
			favicon.setAttribute('rel', 'shortcut icon');
			favicon.setAttribute('href', 'https://kartrausers.s3.amazonaws.com/DSmith/102649_1516729053640favicon.ico');
			head.appendChild(favicon);
		}

	}, false);

	body.appendChild(iframe);
});
