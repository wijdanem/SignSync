// team.js

// Function to load the external HTML file into a div
function loadTeamSection() {
    fetch('team.html')
        .then(response => response.text())
        .then(data => {
            document.getElementById('about-us-section').innerHTML = data;
        })
        .catch(error => console.error('Error loading the team section:', error));
}

// Call the function to load the team section when the window loads
window.onload = loadTeamSection;
