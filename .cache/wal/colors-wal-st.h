const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#101216", /* black   */
  [1] = "#D03060", /* red     */
  [2] = "#F03269", /* green   */
  [3] = "#C74E72", /* yellow  */
  [4] = "#C86E89", /* blue    */
  [5] = "#A1A1A4", /* magenta */
  [6] = "#DEA8B9", /* cyan    */
  [7] = "#e2e0e1", /* white   */

  /* 8 bright colors */
  [8]  = "#9e9c9d",  /* black   */
  [9]  = "#D03060",  /* red     */
  [10] = "#F03269", /* green   */
  [11] = "#C74E72", /* yellow  */
  [12] = "#C86E89", /* blue    */
  [13] = "#A1A1A4", /* magenta */
  [14] = "#DEA8B9", /* cyan    */
  [15] = "#e2e0e1", /* white   */

  /* special colors */
  [256] = "#101216", /* background */
  [257] = "#e2e0e1", /* foreground */
  [258] = "#e2e0e1",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
