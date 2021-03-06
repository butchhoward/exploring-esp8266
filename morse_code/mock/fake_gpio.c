#include <driver/gpio.h>

//stubs to stand in for the real things for the test builds

esp_err_t gpio_config(const gpio_config_t *gpio_cfg)
{
    return ESP_OK;
}

esp_err_t gpio_set_level(gpio_num_t gpio_num, uint32_t level)
{
    return ESP_OK;
}

esp_err_t gpio_set_direction(gpio_num_t gpio_num, gpio_mode_t mode)
{
    return ESP_OK;
}

void gpio_pad_select_gpio(uint8_t gpio_num)
{
    // Do Nothing
}
