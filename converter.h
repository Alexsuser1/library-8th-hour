float cm_to_in(void)
{
    //TUCKER BARTHOLOMEW
    float cm = get_float("Number of centimeters:");
    float in = cm / 2.54;
    printf("\nThe number of inches is %.2f\n", in);
    return in;
}
float mi_to_km(void)
{
    //ALEX BAUM
    float mi = get_float("Number of miles:");
    float km = mi * 1.60934;
    printf("\nThe number of kilometers is %.5f\n", km);
    return km;
}
