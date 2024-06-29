document.addEventListener('DOMContentLoaded', () => {
    const apiKey = 'YOUR_API_KEY'; // Replace with your OpenWeatherMap API key
    const apiUrl = 'https://api.openweathermap.org/data/2.5/weather';
    
    const form = document.getElementById('city-form');
    const input = document.getElementById('city-input');
    
    form.addEventListener('submit', (event) => {
        event.preventDefault();
        const city = input.value;
        getWeather(city);
    });
    
    async function getWeather(city) {
        try {
            const response = await fetch(`${apiUrl}?q=${city}&appid=${apiKey}&units=metric`);
            if (!response.ok) {
                throw new Error('Weather data not found');
            }
            const weatherData = await response.json();
            updateWidget(weatherData);
        } catch (error) {
            console.error('Error fetching weather data:', error);
        }
    }
    
    function updateWidget(data) {
        const location = document.getElementById('location');
        const temperature = document.getElementById('temperature');
        const description = document.getElementById('description');
        const humidity = document.getElementById('humidity');

        location.textContent = `${data.name}, ${data.sys.country}`;
        temperature.textContent = `Temperature: ${data.main.temp}°C`;
        description.textContent = `Weather: ${data.weather[0].description}`;
        humidity.textContent = `Humidity: ${data.main.humidity}%`;
    }
});
