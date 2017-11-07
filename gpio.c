#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/gpio.h>

static unsigned int GPIO_ROTR = 2;
static unsigned int GPIO_ROTL = 3;
static unsigned int GPIO_RIGHT = 4;
static unsigned int GPIO_DOWN = 17;
static unsigned int GPIO_LEFT = 14;
static unsigned int GPIO_UP = 15;

/*
enum button
{
    GPIO_ROTR=2,
    GPIO_ROTL=3,
    GPIO_RIGHT=4,
    GPIO_DOWN=17,
    GPIO_LEFT=14,
    GPIO_HIGH=15
};*/

static int __init gpio_init(void)
{
    enum button m_btn;
    m_btn.GPIO_DOWN;
    /*for (i=1; i<7; i++)
    {
        if (!gpio_is_valid(GPIO_BTNi))
        {
            pr_infor("Invalid Button n°i\n");
            return -ENODEV;
        }
    }*/
    /*
    string sw;                  POSSIBLE???
    switch(sw)
    {
        case"GPIO_ROTR":
        pr_infor("Invalid Button Rotation Right\n");
        return -ENODEV;
static int
    }
*/
    if (!gpio_is_valid(GPIO_ROTR))
    {
        pr_infor("Invalid Button Rotation Right\n");
        return -ENODEV;
    }
    if (!gpio_is_valid(GPIO_ROTL))
    {
        pr_infor("Invalid Button Rotation Left\n");
        return -ENODEV;
    }
    if (!gpio_is_valid(GPIO_RIGHT))
    {
        pr_infor("Invalid Button Right\n");
        return -ENODEV;
    }
    if (!gpio_is_valid(GPIO_DOWN))
    {
        pr_infor("Invalid Button Down\n");
        return -ENODEV;
    }
    if (!gpio_is_valid(GPIO_LEFT))
    {
        pr_infor("Invalid Button Left\n");
        return -ENODEV;
    }
    if (!gpio_is_valid(GPIO_HIGH))
    {
        pr_infor("Invalid Button High\n");
        return -ENODEV;
    }

    gpio_request(unsigned GPIO_ROTR, "button_ROTR"); // In order to take the ownership
    gpio_request(unsigned GPIO_ROTL, "button_ROTL");
    gpio_request(unsigned GPIO_RIGHT, "button_RIGHT");
    gpio_request(unsigned GPIO_DOWN, "button_DOWN");
    gpio_request(unsigned GPIO_LEFT, "button_LEFT");
    gpio_request(unsigned GPIO_HIGH, "button_HIGH");

    gpio_set_debounce(GPIO_ROTR, 200); //Debounce with a delay of 200ms
    gpio_set_debounce(GPIO_ROTL, 200);
    gpio_set_debounce(GPIO_RIGHT, 200);
    gpio_set_debounce(GPIO_DOWN, 200);
    gpio_set_debounce(GPIO_LEFT, 200);
    gpio_set_debounce(GPIO_HIGH, 200);

    gpio_direction_input(GPIO_ROTR); //Set GPIO as an iput
    gpio_direction_input(GPIO_ROTL);
    gpio_direction_input(GPIO_RIGHT);
    gpio_direction_input(GPIO_DOWN);
    gpio_direction_input(GPIO_LEFT);
    gpio_direction_input(GPIO_HIGH);

    static int ROTR_state= gpio_get_value(GPIO_ROTR); //In ROTR_state is stocked the ROTR button state, (HIGH OR LOW)
    static int ROTL_state= gpio_get_value(GPIO_ROTL);
    static int RIGHT_state= gpio_get_value(GPIO_RIGHT);
    static int DOWN_state= gpio_get_value(GPIO_DOWN);
    static int LEFT_state= gpio_get_value(GPIO_LEFT);
    static int HIGH_state= gpio_get_value(GPIO_HIGH);

    union state
    {
        struct state_button
        {
        char ROTR_state :1;
        char ROTL_state :1;
        char RIGHT_state :1;
        char DOWN_state :1;
        char LEFT_state :1;
        char HIGH_state :1;
        char default :2;


        }
        char state_button;
    }
    

    static int buf[6] = {ROTR_state,ROTL_state,RIGHT_state,DOWN_state,LEFT_state,HIGH_state};



}

