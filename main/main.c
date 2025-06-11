#include <stdio.h>
#include "driver/gpio.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"  // This is a MUST for vTaskDelay()

#define LED_PIN GPIO_NUM_2

void app_main(void)
{
    gpio_reset_pin(LED_PIN);
    gpio_set_direction(LED_PIN, GPIO_MODE_OUTPUT);

    while (1) {
        gpio_set_level(LED_PIN, 1);  // LED ON
        vTaskDelay(pdMS_TO_TICKS(1000));  // Delay 1 second

        gpio_set_level(LED_PIN, 0);  // LED OFF
        vTaskDelay(pdMS_TO_TICKS(1000));  // Delay 1 second
    }
}
