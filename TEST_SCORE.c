/*gbm(formula=Y ~ X1 + X2 + X3 + X4 + X5 + X6,distribution=gaussian,data=data,var.monotone=c(0, 0, 0, 0, 0, 0),n.trees=1000,interaction.depth=3,n.minobsinnode=10,shrinkage=0.05,bag.fraction=0.5,train.fraction=0.5,cv.folds=3,keep.data=TRUE,verbose=FALSE,n.cores=1)*/

#include <float.h> 
#include <stdio.h> 
#include <string.h> 
double TEST_SCORE(double X1,
double X2,
const char * X3,
const char * X4,
const char * X5,
double X6){
const double MISSING = -DBL_MAX;
double score = 0;
int done, node;
/* Tree 1 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (!strcmp (X3,"d")||!strcmp (X3,"c")) {node = 1;
} else if (!strcmp (X3,"b")||!strcmp (X3,"a")) {node = 5;
} else {node = 9;
} 
 break; 
case 1:
 if (X2== MISSING) {node = 4;
} else if (X2<= 1.36000865069218) {node = 2;
} else {node = 3;
} 
 break; 
case 2:
score += -0.0667740585294865;
done = 1;
break;
case 3:
score += -0.0040812111956537;
done = 1;
break;
case 4:
score += -0.0470016989857393;
done = 1;
break;
case 5:
 if (X2== MISSING) {node = 8;
} else if (X2<= 0.76500186487101) {node = 6;
} else {node = 7;
} 
 break; 
case 6:
score += 0.0158786683538008;
done = 1;
break;
case 7:
score += 0.0826061603150829;
done = 1;
break;
case 8:
score += 0.0575833508296021;
done = 1;
break;
case 9:
score += 0.00319912492562459;
done = 1;
break;
};
/* Tree 2 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (!strcmp (X3,"d")||!strcmp (X3,"c")) {node = 1;
} else if (!strcmp (X3,"b")||!strcmp (X3,"a")) {node = 5;
} else {node = 9;
} 
 break; 
case 1:
 if (X2== MISSING) {node = 4;
} else if (X2<= 0.695061390986666) {node = 2;
} else {node = 3;
} 
 break; 
case 2:
score += -0.0735409547182871;
done = 1;
break;
case 3:
score += -0.0213807442403797;
done = 1;
break;
case 4:
score += -0.0386367537217927;
done = 1;
break;
case 5:
 if (X2== MISSING) {node = 8;
} else if (X2<= 0.497792645357549) {node = 6;
} else {node = 7;
} 
 break; 
case 6:
score += 0.00591927192398287;
done = 1;
break;
case 7:
score += 0.071396517808204;
done = 1;
break;
case 8:
score += 0.0551671149822004;
done = 1;
break;
case 9:
score += 0.00526345683167611;
done = 1;
break;
};
/* Tree 3 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (!strcmp (X3,"d")||!strcmp (X3,"c")) {node = 1;
} else if (!strcmp (X3,"b")||!strcmp (X3,"a")) {node = 5;
} else {node = 9;
} 
 break; 
case 1:
 if (X2== MISSING) {node = 4;
} else if (X2<= 0.979352016700432) {node = 2;
} else {node = 3;
} 
 break; 
case 2:
score += -0.0654068355729115;
done = 1;
break;
case 3:
score += -0.0106676793233126;
done = 1;
break;
case 4:
score += -0.0380372574481121;
done = 1;
break;
case 5:
 if (X2== MISSING) {node = 8;
} else if (X2<= 0.807704242412001) {node = 6;
} else {node = 7;
} 
 break; 
case 6:
score += 0.0198738616829782;
done = 1;
break;
case 7:
score += 0.0679974800344612;
done = 1;
break;
case 8:
score += 0.048748032693868;
done = 1;
break;
case 9:
score += 0.00361968182003838;
done = 1;
break;
};
/* Tree 4 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (!strcmp (X3,"d")||!strcmp (X3,"c")) {node = 1;
} else if (!strcmp (X3,"b")||!strcmp (X3,"a")) {node = 5;
} else {node = 9;
} 
 break; 
case 1:
 if (!strcmp (X3,"d")) {node = 2;
} else if (!strcmp (X3,"c")||!strcmp (X3,"b")||!strcmp (X3,"a")) {node = 3;
} else {node = 4;
} 
 break; 
case 2:
score += -0.0675125298021537;
done = 1;
break;
case 3:
score += -0.0168768625438835;
done = 1;
break;
case 4:
score += -0.040705411841893;
done = 1;
break;
case 5:
 if (X2== MISSING) {node = 8;
} else if (X2<= 1.28607494360767) {node = 6;
} else {node = 7;
} 
 break; 
case 6:
score += 0.0284553030990704;
done = 1;
break;
case 7:
score += 0.0843700712178913;
done = 1;
break;
case 8:
score += 0.0495459612491519;
done = 1;
break;
case 9:
score += 0.000449214287623494;
done = 1;
break;
};
/* Tree 5 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (!strcmp (X3,"d")||!strcmp (X3,"c")) {node = 1;
} else if (!strcmp (X3,"b")||!strcmp (X3,"a")) {node = 5;
} else {node = 9;
} 
 break; 
case 1:
 if (X2== MISSING) {node = 4;
} else if (X2<= 0.427694239653647) {node = 2;
} else {node = 3;
} 
 break; 
case 2:
score += -0.0876338037017559;
done = 1;
break;
case 3:
score += -0.0258032729402409;
done = 1;
break;
case 4:
score += -0.0387031678473196;
done = 1;
break;
case 5:
 if (X2== MISSING) {node = 8;
} else if (X2<= 0.480894508538768) {node = 6;
} else {node = 7;
} 
 break; 
case 6:
score += -0.00212288558847194;
done = 1;
break;
case 7:
score += 0.059339486615921;
done = 1;
break;
case 8:
score += 0.0416206045389789;
done = 1;
break;
case 9:
score += -0.00303941290780305;
done = 1;
break;
};
/* Tree 6 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (!strcmp (X3,"d")||!strcmp (X3,"c")) {node = 1;
} else if (!strcmp (X3,"b")||!strcmp (X3,"a")) {node = 5;
} else {node = 9;
} 
 break; 
case 1:
 if (!strcmp (X3,"d")) {node = 2;
} else if (!strcmp (X3,"c")||!strcmp (X3,"b")||!strcmp (X3,"a")) {node = 3;
} else {node = 4;
} 
 break; 
case 2:
score += -0.0638078145690199;
done = 1;
break;
case 3:
score += -0.0108374817049922;
done = 1;
break;
case 4:
score += -0.0385838465385305;
done = 1;
break;
case 5:
 if (X2== MISSING) {node = 8;
} else if (X2<= 0.838921220740303) {node = 6;
} else {node = 7;
} 
 break; 
case 6:
score += 0.0131152258712183;
done = 1;
break;
case 7:
score += 0.0638902923062639;
done = 1;
break;
case 8:
score += 0.0466922859331033;
done = 1;
break;
case 9:
score += 0.00371311516739985;
done = 1;
break;
};
/* Tree 7 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (!strcmp (X3,"d")||!strcmp (X3,"c")) {node = 1;
} else if (!strcmp (X3,"b")||!strcmp (X3,"a")) {node = 5;
} else {node = 9;
} 
 break; 
case 1:
 if (X2== MISSING) {node = 4;
} else if (X2<= 1.38757203659043) {node = 2;
} else {node = 3;
} 
 break; 
case 2:
score += -0.0560373080852032;
done = 1;
break;
case 3:
score += -0.00240600419246499;
done = 1;
break;
case 4:
score += -0.0397492824585198;
done = 1;
break;
case 5:
 if (X2== MISSING) {node = 8;
} else if (X2<= 0.480876016197726) {node = 6;
} else {node = 7;
} 
 break; 
case 6:
score += 0.0021317416499851;
done = 1;
break;
case 7:
score += 0.0540953946253513;
done = 1;
break;
case 8:
score += 0.0405396590665601;
done = 1;
break;
case 9:
score += -0.00281636935698302;
done = 1;
break;
};
/* Tree 8 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (!strcmp (X3,"d")||!strcmp (X3,"c")) {node = 1;
} else if (!strcmp (X3,"b")||!strcmp (X3,"a")) {node = 5;
} else {node = 9;
} 
 break; 
case 1:
 if (X2== MISSING) {node = 4;
} else if (X2<= 0.716685948660597) {node = 2;
} else {node = 3;
} 
 break; 
case 2:
score += -0.0624365038729065;
done = 1;
break;
case 3:
score += -0.0108992100941789;
done = 1;
break;
case 4:
score += -0.0284438207422564;
done = 1;
break;
case 5:
 if (X2== MISSING) {node = 8;
} else if (X2<= 0.762374920304865) {node = 6;
} else {node = 7;
} 
 break; 
case 6:
score += 0.00810658822005798;
done = 1;
break;
case 7:
score += 0.0588303738762487;
done = 1;
break;
case 8:
score += 0.0397507847762137;
done = 1;
break;
case 9:
score += 0.00128902726379654;
done = 1;
break;
};
/* Tree 9 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (!strcmp (X3,"d")||!strcmp (X3,"c")||!strcmp (X3,"b")) {node = 1;
} else if (!strcmp (X3,"a")) {node = 8;
} else {node = 9;
} 
 break; 
case 1:
 if (!strcmp (X3,"d")) {node = 2;
} else if (!strcmp (X3,"c")||!strcmp (X3,"b")||!strcmp (X3,"a")) {node = 3;
} else {node = 7;
} 
 break; 
case 2:
score += -0.0534512444966248;
done = 1;
break;
case 3:
 if (X2== MISSING) {node = 6;
} else if (X2<= 0.928254426689819) {node = 4;
} else {node = 5;
} 
 break; 
case 4:
score += -0.0260807589712247;
done = 1;
break;
case 5:
score += 0.0161597906425848;
done = 1;
break;
case 6:
score += -0.00607207757520967;
done = 1;
break;
case 7:
score += -0.0227624659225264;
done = 1;
break;
case 8:
score += 0.0556481635854055;
done = 1;
break;
case 9:
score += 0.000447080411821452;
done = 1;
break;
};
/* Tree 10 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (!strcmp (X3,"d")||!strcmp (X3,"c")) {node = 1;
} else if (!strcmp (X3,"b")||!strcmp (X3,"a")) {node = 5;
} else {node = 9;
} 
 break; 
case 1:
 if (!strcmp (X3,"d")) {node = 2;
} else if (!strcmp (X3,"c")||!strcmp (X3,"b")||!strcmp (X3,"a")) {node = 3;
} else {node = 4;
} 
 break; 
case 2:
score += -0.0597706548185226;
done = 1;
break;
case 3:
score += -0.012924976550727;
done = 1;
break;
case 4:
score += -0.0349899699377321;
done = 1;
break;
case 5:
 if (X2== MISSING) {node = 8;
} else if (X2<= 1.31863263738342) {node = 6;
} else {node = 7;
} 
 break; 
case 6:
score += 0.0183854965092139;
done = 1;
break;
case 7:
score += 0.0679167921945639;
done = 1;
break;
case 8:
score += 0.0378442198141729;
done = 1;
break;
case 9:
score += -0.00236025292887871;
done = 1;
break;
};
/* Tree 11 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (!strcmp (X3,"d")||!strcmp (X3,"c")||!strcmp (X3,"b")) {node = 1;
} else if (!strcmp (X3,"a")) {node = 8;
} else {node = 9;
} 
 break; 
case 1:
 if (!strcmp (X3,"d")) {node = 2;
} else if (!strcmp (X3,"c")||!strcmp (X3,"b")||!strcmp (X3,"a")) {node = 3;
} else {node = 7;
} 
 break; 
case 2:
score += -0.0490996261114321;
done = 1;
break;
case 3:
 if (X2== MISSING) {node = 6;
} else if (X2<= 0.713065097341314) {node = 4;
} else {node = 5;
} 
 break; 
case 4:
score += -0.0264110484271901;
done = 1;
break;
case 5:
score += 0.0144442697393345;
done = 1;
break;
case 6:
score += -0.000379341276838172;
done = 1;
break;
case 7:
score += -0.0183432451823309;
done = 1;
break;
case 8:
score += 0.0560154459724066;
done = 1;
break;
case 9:
score += 0.00277462310561457;
done = 1;
break;
};
/* Tree 12 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (!strcmp (X3,"d")||!strcmp (X3,"c")) {node = 1;
} else if (!strcmp (X3,"b")||!strcmp (X3,"a")) {node = 5;
} else {node = 9;
} 
 break; 
case 1:
 if (X2== MISSING) {node = 4;
} else if (X2<= 1.39752816944383) {node = 2;
} else {node = 3;
} 
 break; 
case 2:
score += -0.0397501174891204;
done = 1;
break;
case 3:
score += 0.00250684673186635;
done = 1;
break;
case 4:
score += -0.0275491630309482;
done = 1;
break;
case 5:
 if (!strcmp (X3,"d")||!strcmp (X3,"c")||!strcmp (X3,"b")) {node = 6;
} else if (!strcmp (X3,"a")) {node = 7;
} else {node = 8;
} 
 break; 
case 6:
score += 0.0127920007092867;
done = 1;
break;
case 7:
score += 0.0479440664047993;
done = 1;
break;
case 8:
score += 0.0313444798263628;
done = 1;
break;
case 9:
score += -0.00210710931658985;
done = 1;
break;
};
/* Tree 13 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (!strcmp (X3,"d")||!strcmp (X3,"c")) {node = 1;
} else if (!strcmp (X3,"b")||!strcmp (X3,"a")) {node = 5;
} else {node = 9;
} 
 break; 
case 1:
 if (X2== MISSING) {node = 4;
} else if (X2<= 0.965519925579429) {node = 2;
} else {node = 3;
} 
 break; 
case 2:
score += -0.0465542522756752;
done = 1;
break;
case 3:
score += -0.00723519289283247;
done = 1;
break;
case 4:
score += -0.0280862092322188;
done = 1;
break;
case 5:
 if (X2== MISSING) {node = 8;
} else if (X2<= 0.375202407129109) {node = 6;
} else {node = 7;
} 
 break; 
case 6:
score += -0.00638260358458755;
done = 1;
break;
case 7:
score += 0.0382669230843068;
done = 1;
break;
case 8:
score += 0.0295640492420647;
done = 1;
break;
case 9:
score += -0.000875287232357002;
done = 1;
break;
};
/* Tree 14 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (!strcmp (X3,"d")||!strcmp (X3,"c")||!strcmp (X3,"b")) {node = 1;
} else if (!strcmp (X3,"a")) {node = 8;
} else {node = 9;
} 
 break; 
case 1:
 if (X2== MISSING) {node = 7;
} else if (X2<= 1.05775943095796) {node = 2;
} else {node = 6;
} 
 break; 
case 2:
 if (!strcmp (X3,"d")) {node = 3;
} else if (!strcmp (X3,"c")||!strcmp (X3,"b")||!strcmp (X3,"a")) {node = 4;
} else {node = 5;
} 
 break; 
case 3:
score += -0.0590293544596028;
done = 1;
break;
case 4:
score += -0.0216852224403823;
done = 1;
break;
case 5:
score += -0.0361518681775578;
done = 1;
break;
case 6:
score += 0.00260822038035695;
done = 1;
break;
case 7:
score += -0.0203991049133786;
done = 1;
break;
case 8:
score += 0.0473689230130777;
done = 1;
break;
case 9:
score += -0.0033215618759116;
done = 1;
break;
};
/* Tree 15 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (!strcmp (X3,"d")||!strcmp (X3,"c")) {node = 1;
} else if (!strcmp (X3,"b")||!strcmp (X3,"a")) {node = 5;
} else {node = 9;
} 
 break; 
case 1:
 if (X2== MISSING) {node = 4;
} else if (X2<= 0.427694239653647) {node = 2;
} else {node = 3;
} 
 break; 
case 2:
score += -0.0566111537793204;
done = 1;
break;
case 3:
score += -0.0121261669756498;
done = 1;
break;
case 4:
score += -0.0222661272029571;
done = 1;
break;
case 5:
 if (X2== MISSING) {node = 8;
} else if (X2<= 0.807704242412001) {node = 6;
} else {node = 7;
} 
 break; 
case 6:
score += 0.00764437826460414;
done = 1;
break;
case 7:
score += 0.0436434966476699;
done = 1;
break;
case 8:
score += 0.0297491000787673;
done = 1;
break;
case 9:
score += 0.00145281643750925;
done = 1;
break;
};
/* Tree 16 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (!strcmp (X3,"d")||!strcmp (X3,"c")||!strcmp (X3,"b")) {node = 1;
} else if (!strcmp (X3,"a")) {node = 8;
} else {node = 9;
} 
 break; 
case 1:
 if (!strcmp (X3,"d")) {node = 2;
} else if (!strcmp (X3,"c")||!strcmp (X3,"b")||!strcmp (X3,"a")) {node = 3;
} else {node = 7;
} 
 break; 
case 2:
score += -0.0390366637360431;
done = 1;
break;
case 3:
 if (X2== MISSING) {node = 6;
} else if (X2<= 0.719261076068506) {node = 4;
} else {node = 5;
} 
 break; 
case 4:
score += -0.0225511472044607;
done = 1;
break;
case 5:
score += 0.0136310195525357;
done = 1;
break;
case 6:
score += 0.000687805428081696;
done = 1;
break;
case 7:
score += -0.0131842314228825;
done = 1;
break;
case 8:
score += 0.0428680033152295;
done = 1;
break;
case 9:
score += 0.000492513853216835;
done = 1;
break;
};
/* Tree 17 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (!strcmp (X3,"d")||!strcmp (X3,"c")) {node = 1;
} else if (!strcmp (X3,"b")||!strcmp (X3,"a")) {node = 5;
} else {node = 9;
} 
 break; 
case 1:
 if (X2== MISSING) {node = 4;
} else if (X2<= 0.363800286315382) {node = 2;
} else {node = 3;
} 
 break; 
case 2:
score += -0.0553565398433457;
done = 1;
break;
case 3:
score += -0.0133109688780795;
done = 1;
break;
case 4:
score += -0.0221626680286618;
done = 1;
break;
case 5:
 if (X2== MISSING) {node = 8;
} else if (X2<= 0.381516147404909) {node = 6;
} else {node = 7;
} 
 break; 
case 6:
score += -0.0121331512242186;
done = 1;
break;
case 7:
score += 0.0363374116590349;
done = 1;
break;
case 8:
score += 0.0259804537779978;
done = 1;
break;
case 9:
score += 0.000368312976854877;
done = 1;
break;
};
/* Tree 18 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (!strcmp (X3,"d")||!strcmp (X3,"c")||!strcmp (X3,"b")) {node = 1;
} else if (!strcmp (X3,"a")) {node = 8;
} else {node = 9;
} 
 break; 
case 1:
 if (!strcmp (X3,"d")) {node = 2;
} else if (!strcmp (X3,"c")||!strcmp (X3,"b")||!strcmp (X3,"a")) {node = 6;
} else {node = 7;
} 
 break; 
case 2:
 if (X2== MISSING) {node = 5;
} else if (X2<= 1.07215800322592) {node = 3;
} else {node = 4;
} 
 break; 
case 3:
score += -0.0560671132536067;
done = 1;
break;
case 4:
score += -0.00977984860392928;
done = 1;
break;
case 5:
score += -0.0355793075889954;
done = 1;
break;
case 6:
score += 0.000373711515188137;
done = 1;
break;
case 7:
score += -0.0113542786738771;
done = 1;
break;
case 8:
score += 0.0392059249501717;
done = 1;
break;
case 9:
score += 0.0013868926393832;
done = 1;
break;
};
/* Tree 19 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (!strcmp (X3,"d")||!strcmp (X3,"c")||!strcmp (X3,"b")) {node = 1;
} else if (!strcmp (X3,"a")) {node = 8;
} else {node = 9;
} 
 break; 
case 1:
 if (!strcmp (X3,"d")) {node = 2;
} else if (!strcmp (X3,"c")||!strcmp (X3,"b")||!strcmp (X3,"a")) {node = 6;
} else {node = 7;
} 
 break; 
case 2:
 if (X2== MISSING) {node = 5;
} else if (X2<= 1.36000865069218) {node = 3;
} else {node = 4;
} 
 break; 
case 3:
score += -0.0501490807132961;
done = 1;
break;
case 4:
score += -0.00231834582711226;
done = 1;
break;
case 5:
score += -0.0377790630703175;
done = 1;
break;
case 6:
score += -0.0017603845595643;
done = 1;
break;
case 7:
score += -0.0133022815409106;
done = 1;
break;
case 8:
score += 0.0387728638318541;
done = 1;
break;
case 9:
score += 0.00107045858197244;
done = 1;
break;
};
/* Tree 20 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (!strcmp (X3,"d")||!strcmp (X3,"c")) {node = 1;
} else if (!strcmp (X3,"b")||!strcmp (X3,"a")) {node = 5;
} else {node = 9;
} 
 break; 
case 1:
 if (X2== MISSING) {node = 4;
} else if (X2<= 1.36657645902596) {node = 2;
} else {node = 3;
} 
 break; 
case 2:
score += -0.0311261018161877;
done = 1;
break;
case 3:
score += 0.0100947496874295;
done = 1;
break;
case 4:
score += -0.0194414509962647;
done = 1;
break;
case 5:
 if (X2== MISSING) {node = 8;
} else if (X2<= 0.638951611239463) {node = 6;
} else {node = 7;
} 
 break; 
case 6:
score += -0.00150644923867577;
done = 1;
break;
case 7:
score += 0.029398684422812;
done = 1;
break;
case 8:
score += 0.0188457119530357;
done = 1;
break;
case 9:
score += -0.000604166825208925;
done = 1;
break;
};
/* Tree 21 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (!strcmp (X3,"d")||!strcmp (X3,"c")) {node = 1;
} else if (!strcmp (X3,"b")||!strcmp (X3,"a")) {node = 5;
} else {node = 9;
} 
 break; 
case 1:
 if (X2== MISSING) {node = 4;
} else if (X2<= 0.972100406652316) {node = 2;
} else {node = 3;
} 
 break; 
case 2:
score += -0.0305054600889175;
done = 1;
break;
case 3:
score += 0.00127602099994699;
done = 1;
break;
case 4:
score += -0.0165865632616776;
done = 1;
break;
case 5:
 if (X2== MISSING) {node = 8;
} else if (X2<= 1.33330795681104) {node = 6;
} else {node = 7;
} 
 break; 
case 6:
score += 0.0119996350064129;
done = 1;
break;
case 7:
score += 0.0426023861955731;
done = 1;
break;
case 8:
score += 0.0228324672857616;
done = 1;
break;
case 9:
score += 0.00123083854576496;
done = 1;
break;
};
/* Tree 22 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (!strcmp (X3,"d")) {node = 1;
} else if (!strcmp (X3,"c")||!strcmp (X3,"b")||!strcmp (X3,"a")) {node = 5;
} else {node = 9;
} 
 break; 
case 1:
 if (X2== MISSING) {node = 4;
} else if (X2<= 0.286941573489457) {node = 2;
} else {node = 3;
} 
 break; 
case 2:
score += -0.0831296079087425;
done = 1;
break;
case 3:
score += -0.0236950395468045;
done = 1;
break;
case 4:
score += -0.0319707389389731;
done = 1;
break;
case 5:
 if (!strcmp (X3,"d")||!strcmp (X3,"c")||!strcmp (X3,"b")) {node = 6;
} else if (!strcmp (X3,"a")) {node = 7;
} else {node = 8;
} 
 break; 
case 6:
score += -0.00148543563780018;
done = 1;
break;
case 7:
score += 0.0304008969514735;
done = 1;
break;
case 8:
score += 0.0102621605793007;
done = 1;
break;
case 9:
score += -0.00308343566847384;
done = 1;
break;
};
/* Tree 23 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (!strcmp (X3,"d")||!strcmp (X3,"c")) {node = 1;
} else if (!strcmp (X3,"b")||!strcmp (X3,"a")) {node = 5;
} else {node = 9;
} 
 break; 
case 1:
 if (X2== MISSING) {node = 4;
} else if (X2<= 0.360785767901689) {node = 2;
} else {node = 3;
} 
 break; 
case 2:
score += -0.0441727851780764;
done = 1;
break;
case 3:
score += -0.00985357150864101;
done = 1;
break;
case 4:
score += -0.015208342435787;
done = 1;
break;
case 5:
 if (X2== MISSING) {node = 8;
} else if (X2<= 1.23861401411705) {node = 6;
} else {node = 7;
} 
 break; 
case 6:
score += 0.00556162006930925;
done = 1;
break;
case 7:
score += 0.0415842597636655;
done = 1;
break;
case 8:
score += 0.0174590056564361;
done = 1;
break;
case 9:
score += -0.000965378667577713;
done = 1;
break;
};
/* Tree 24 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (!strcmp (X3,"d")||!strcmp (X3,"c")||!strcmp (X3,"b")) {node = 1;
} else if (!strcmp (X3,"a")) {node = 5;
} else {node = 9;
} 
 break; 
case 1:
 if (X2== MISSING) {node = 4;
} else if (X2<= 1.2582157056313) {node = 2;
} else {node = 3;
} 
 break; 
case 2:
score += -0.017988582619521;
done = 1;
break;
case 3:
score += 0.0119108067422807;
done = 1;
break;
case 4:
score += -0.00812986504617017;
done = 1;
break;
case 5:
 if (X2== MISSING) {node = 8;
} else if (X2<= 0.757347254315391) {node = 6;
} else {node = 7;
} 
 break; 
case 6:
score += 0.00725141492112917;
done = 1;
break;
case 7:
score += 0.0479534227406984;
done = 1;
break;
case 8:
score += 0.029167880670128;
done = 1;
break;
case 9:
score += 0.00156754884006735;
done = 1;
break;
};
/* Tree 25 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (!strcmp (X3,"d")||!strcmp (X3,"c")||!strcmp (X3,"b")) {node = 1;
} else if (!strcmp (X3,"a")) {node = 5;
} else {node = 9;
} 
 break; 
case 1:
 if (X2== MISSING) {node = 4;
} else if (X2<= 1.47838357230648) {node = 2;
} else {node = 3;
} 
 break; 
case 2:
score += -0.0205088368845366;
done = 1;
break;
case 3:
score += 0.010817812215382;
done = 1;
break;
case 4:
score += -0.0131584499448909;
done = 1;
break;
case 5:
 if (X2== MISSING) {node = 8;
} else if (X2<= 0.526469208067283) {node = 6;
} else {node = 7;
} 
 break; 
case 6:
score += -0.00771065637765873;
done = 1;
break;
case 7:
score += 0.0456043758099278;
done = 1;
break;
case 8:
score += 0.0305860568838471;
done = 1;
break;
case 9:
score += -0.000735010005529343;
done = 1;
break;
};
/* Tree 26 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (!strcmp (X3,"d")||!strcmp (X3,"c")) {node = 1;
} else if (!strcmp (X3,"b")||!strcmp (X3,"a")) {node = 5;
} else {node = 9;
} 
 break; 
case 1:
 if (X2== MISSING) {node = 4;
} else if (X2<= 1.41967898863368) {node = 2;
} else {node = 3;
} 
 break; 
case 2:
score += -0.0220112390828014;
done = 1;
break;
case 3:
score += 0.00725074457800156;
done = 1;
break;
case 4:
score += -0.0146381408375597;
done = 1;
break;
case 5:
 if (X2== MISSING) {node = 8;
} else if (X2<= 0.792249342659488) {node = 6;
} else {node = 7;
} 
 break; 
case 6:
score += 0.000567009760973463;
done = 1;
break;
case 7:
score += 0.0313281634168446;
done = 1;
break;
case 8:
score += 0.019073720090522;
done = 1;
break;
case 9:
score += 0.00194809473905646;
done = 1;
break;
};
/* Tree 27 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (!strcmp (X3,"d")) {node = 1;
} else if (!strcmp (X3,"c")||!strcmp (X3,"b")||!strcmp (X3,"a")) {node = 5;
} else {node = 9;
} 
 break; 
case 1:
 if (X1== MISSING) {node = 4;
} else if (X1<= 0.679134850855917) {node = 2;
} else {node = 3;
} 
 break; 
case 2:
score += -0.0329920711900231;
done = 1;
break;
case 3:
score += 0.00559854095092274;
done = 1;
break;
case 4:
score += -0.0362329541715817;
done = 1;
break;
case 5:
 if (X2== MISSING) {node = 8;
} else if (X2<= 1.29167225724086) {node = 6;
} else {node = 7;
} 
 break; 
case 6:
score += 0.00284615449420072;
done = 1;
break;
case 7:
score += 0.031285329020595;
done = 1;
break;
case 8:
score += 0.0115844483430928;
done = 1;
break;
case 9:
score += -8.90905915023609e-05;
done = 1;
break;
};
/* Tree 28 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (!strcmp (X3,"d")||!strcmp (X3,"c")||!strcmp (X3,"b")) {node = 1;
} else if (!strcmp (X3,"a")) {node = 8;
} else {node = 9;
} 
 break; 
case 1:
 if (X2== MISSING) {node = 7;
} else if (X2<= 1.38270306587219) {node = 2;
} else {node = 6;
} 
 break; 
case 2:
 if (!strcmp (X3,"d")) {node = 3;
} else if (!strcmp (X3,"c")||!strcmp (X3,"b")||!strcmp (X3,"a")) {node = 4;
} else {node = 5;
} 
 break; 
case 3:
score += -0.0320048457675158;
done = 1;
break;
case 4:
score += -0.00719983955799151;
done = 1;
break;
case 5:
score += -0.0161843299960869;
done = 1;
break;
case 6:
score += 0.0104283581502792;
done = 1;
break;
case 7:
score += -0.00866662148016428;
done = 1;
break;
case 8:
score += 0.0230761210046235;
done = 1;
break;
case 9:
score += 0.000602259325393761;
done = 1;
break;
};
/* Tree 29 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (!strcmp (X3,"d")) {node = 1;
} else if (!strcmp (X3,"c")||!strcmp (X3,"b")||!strcmp (X3,"a")) {node = 2;
} else {node = 9;
} 
 break; 
case 1:
score += -0.0282076872179961;
done = 1;
break;
case 2:
 if (X2== MISSING) {node = 8;
} else if (X2<= 0.195578099228442) {node = 3;
} else {node = 4;
} 
 break; 
case 3:
score += -0.0330574938097941;
done = 1;
break;
case 4:
 if (!strcmp (X3,"d")||!strcmp (X3,"c")||!strcmp (X3,"b")) {node = 5;
} else if (!strcmp (X3,"a")) {node = 6;
} else {node = 7;
} 
 break; 
case 5:
score += 0.00275515229600061;
done = 1;
break;
case 6:
score += 0.0268777869281649;
done = 1;
break;
case 7:
score += 0.0108450602519094;
done = 1;
break;
case 8:
score += 0.00628687157883634;
done = 1;
break;
case 9:
score += -0.00295767017871474;
done = 1;
break;
};
/* Tree 30 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (!strcmp (X3,"d")) {node = 1;
} else if (!strcmp (X3,"c")||!strcmp (X3,"b")||!strcmp (X3,"a")) {node = 2;
} else {node = 9;
} 
 break; 
case 1:
score += -0.0266439134773682;
done = 1;
break;
case 2:
 if (X2== MISSING) {node = 8;
} else if (X2<= 0.99110492435284) {node = 3;
} else {node = 4;
} 
 break; 
case 3:
score += -0.00477774176214552;
done = 1;
break;
case 4:
 if (X1== MISSING) {node = 7;
} else if (X1<= 0.747500406927429) {node = 5;
} else {node = 6;
} 
 break; 
case 5:
score += 0.0105470141277929;
done = 1;
break;
case 6:
score += 0.0491107416893461;
done = 1;
break;
case 7:
score += 0.01631810954189;
done = 1;
break;
case 8:
score += 0.00753876283936426;
done = 1;
break;
case 9:
score += -0.00066507947665153;
done = 1;
break;
};
/* Tree 31 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (!strcmp (X3,"d")||!strcmp (X3,"c")||!strcmp (X3,"b")) {node = 1;
} else if (!strcmp (X3,"a")) {node = 8;
} else {node = 9;
} 
 break; 
case 1:
 if (X2== MISSING) {node = 7;
} else if (X2<= 0.225805875146762) {node = 2;
} else {node = 3;
} 
 break; 
case 2:
score += -0.0381454013877313;
done = 1;
break;
case 3:
 if (X2== MISSING) {node = 6;
} else if (X2<= 1.45951570104808) {node = 4;
} else {node = 5;
} 
 break; 
case 4:
score += -0.00956145895709528;
done = 1;
break;
case 5:
score += 0.0102334849218436;
done = 1;
break;
case 6:
score += -0.00363482905322137;
done = 1;
break;
case 7:
score += -0.00812839315927735;
done = 1;
break;
case 8:
score += 0.0241110892035114;
done = 1;
break;
case 9:
score += -0.000648833251110364;
done = 1;
break;
};
/* Tree 32 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (!strcmp (X3,"d")||!strcmp (X3,"c")||!strcmp (X3,"b")) {node = 1;
} else if (!strcmp (X3,"a")) {node = 5;
} else {node = 9;
} 
 break; 
case 1:
 if (X2== MISSING) {node = 4;
} else if (X2<= 0.338946678442881) {node = 2;
} else {node = 3;
} 
 break; 
case 2:
score += -0.029164920893176;
done = 1;
break;
case 3:
score += -0.0024064448448387;
done = 1;
break;
case 4:
score += -0.00744164195070863;
done = 1;
break;
case 5:
 if (X2== MISSING) {node = 8;
} else if (X2<= 0.88341805851087) {node = 6;
} else {node = 7;
} 
 break; 
case 6:
score += 0.00604670152874535;
done = 1;
break;
case 7:
score += 0.0387544235574351;
done = 1;
break;
case 8:
score += 0.0239337370131851;
done = 1;
break;
case 9:
score += 0.00059045506404816;
done = 1;
break;
};
/* Tree 33 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (!strcmp (X3,"d")||!strcmp (X3,"c")||!strcmp (X3,"b")) {node = 1;
} else if (!strcmp (X3,"a")) {node = 8;
} else {node = 9;
} 
 break; 
case 1:
 if (!strcmp (X3,"d")) {node = 2;
} else if (!strcmp (X3,"c")||!strcmp (X3,"b")||!strcmp (X3,"a")) {node = 3;
} else {node = 7;
} 
 break; 
case 2:
score += -0.022442056054835;
done = 1;
break;
case 3:
 if (X2== MISSING) {node = 6;
} else if (X2<= 0.928254426689819) {node = 4;
} else {node = 5;
} 
 break; 
case 4:
score += -0.0120640452553764;
done = 1;
break;
case 5:
score += 0.00842263494153512;
done = 1;
break;
case 6:
score += -0.00120785574932074;
done = 1;
break;
case 7:
score += -0.00901285910486113;
done = 1;
break;
case 8:
score += 0.0208807301250746;
done = 1;
break;
case 9:
score += -0.00124052590507785;
done = 1;
break;
};
/* Tree 34 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (!strcmp (X3,"d")||!strcmp (X3,"c")||!strcmp (X3,"b")) {node = 1;
} else if (!strcmp (X3,"a")) {node = 5;
} else {node = 9;
} 
 break; 
case 1:
 if (X2== MISSING) {node = 4;
} else if (X2<= 0.284386914689094) {node = 2;
} else {node = 3;
} 
 break; 
case 2:
score += -0.0400868565441951;
done = 1;
break;
case 3:
score += -0.00269875201236546;
done = 1;
break;
case 4:
score += -0.00806832021640482;
done = 1;
break;
case 5:
 if (X2== MISSING) {node = 8;
} else if (X2<= 1.18213485390879) {node = 6;
} else {node = 7;
} 
 break; 
case 6:
score += 0.00857553758545481;
done = 1;
break;
case 7:
score += 0.0449199986936961;
done = 1;
break;
case 8:
score += 0.0208857582834075;
done = 1;
break;
case 9:
score += -0.000887708748451367;
done = 1;
break;
};
/* Tree 35 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X2== MISSING) {node = 9;
} else if (X2<= 0.582602428039536) {node = 1;
} else {node = 2;
} 
 break; 
case 1:
score += -0.0173249646375305;
done = 1;
break;
case 2:
 if (X1== MISSING) {node = 5;
} else if (X1<= 0.524496010621078) {node = 3;
} else {node = 4;
} 
 break; 
case 3:
score += -0.00544505430306864;
done = 1;
break;
case 4:
score += 0.0249811817552701;
done = 1;
break;
case 5:
 if (!strcmp (X3,"d")||!strcmp (X3,"c")||!strcmp (X3,"b")) {node = 6;
} else if (!strcmp (X3,"a")) {node = 7;
} else {node = 8;
} 
 break; 
case 6:
score += -0.00345540736914988;
done = 1;
break;
case 7:
score += 0.0283155904230574;
done = 1;
break;
case 8:
score += 0.00402012152313419;
done = 1;
break;
case 9:
score += -2.32156021927025e-05;
done = 1;
break;
};
/* Tree 36 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X1== MISSING) {node = 3;
} else if (X1<= 0.517523535876535) {node = 1;
} else {node = 2;
} 
 break; 
case 1:
score += -0.0161084699306342;
done = 1;
break;
case 2:
score += 0.0121602057032747;
done = 1;
break;
case 3:
 if (!strcmp (X3,"d")||!strcmp (X3,"c")) {node = 4;
} else if (!strcmp (X3,"b")||!strcmp (X3,"a")) {node = 8;
} else {node = 9;
} 
 break; 
case 4:
 if (X2== MISSING) {node = 7;
} else if (X2<= 1.09285145276226) {node = 5;
} else {node = 6;
} 
 break; 
case 5:
score += -0.0245736599676981;
done = 1;
break;
case 6:
score += -0.000106894688786553;
done = 1;
break;
case 7:
score += -0.0128721635299578;
done = 1;
break;
case 8:
score += 0.0177045418846689;
done = 1;
break;
case 9:
score += -0.000327874129085297;
done = 1;
break;
};
/* Tree 37 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (!strcmp (X3,"d")) {node = 1;
} else if (!strcmp (X3,"c")||!strcmp (X3,"b")||!strcmp (X3,"a")) {node = 2;
} else {node = 9;
} 
 break; 
case 1:
score += -0.0210867911285486;
done = 1;
break;
case 2:
 if (X2== MISSING) {node = 8;
} else if (X2<= 0.184807081473991) {node = 3;
} else {node = 4;
} 
 break; 
case 3:
score += -0.0221249549962208;
done = 1;
break;
case 4:
 if (!strcmp (X3,"d")||!strcmp (X3,"c")||!strcmp (X3,"b")) {node = 5;
} else if (!strcmp (X3,"a")) {node = 6;
} else {node = 7;
} 
 break; 
case 5:
score += 0.00218801767110289;
done = 1;
break;
case 6:
score += 0.0235830481243205;
done = 1;
break;
case 7:
score += 0.00918762639962471;
done = 1;
break;
case 8:
score += 0.00514729331628981;
done = 1;
break;
case 9:
score += -0.00156863230158882;
done = 1;
break;
};
/* Tree 38 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (!strcmp (X3,"d")) {node = 1;
} else if (!strcmp (X3,"c")||!strcmp (X3,"b")||!strcmp (X3,"a")) {node = 2;
} else {node = 9;
} 
 break; 
case 1:
score += -0.0220006243375001;
done = 1;
break;
case 2:
 if (X2== MISSING) {node = 8;
} else if (X2<= 0.290391002781689) {node = 3;
} else {node = 4;
} 
 break; 
case 3:
score += -0.0159503965747558;
done = 1;
break;
case 4:
 if (!strcmp (X3,"d")||!strcmp (X3,"c")||!strcmp (X3,"b")) {node = 5;
} else if (!strcmp (X3,"a")) {node = 6;
} else {node = 7;
} 
 break; 
case 5:
score += 0.00318941157378567;
done = 1;
break;
case 6:
score += 0.0241705912578152;
done = 1;
break;
case 7:
score += 0.0109705113241542;
done = 1;
break;
case 8:
score += 0.00663325394044095;
done = 1;
break;
case 9:
score += -0.00138423197738255;
done = 1;
break;
};
/* Tree 39 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X1== MISSING) {node = 6;
} else if (X1<= 0.751451854594052) {node = 1;
} else {node = 5;
} 
 break; 
case 1:
 if (X2== MISSING) {node = 4;
} else if (X2<= 0.121212909463793) {node = 2;
} else {node = 3;
} 
 break; 
case 2:
score += -0.0359471920005267;
done = 1;
break;
case 3:
score += -0.00308929439364794;
done = 1;
break;
case 4:
score += -0.00685426182776946;
done = 1;
break;
case 5:
score += 0.029017338839958;
done = 1;
break;
case 6:
 if (!strcmp (X3,"d")||!strcmp (X3,"c")) {node = 7;
} else if (!strcmp (X3,"b")||!strcmp (X3,"a")) {node = 8;
} else {node = 9;
} 
 break; 
case 7:
score += -0.0146946528190139;
done = 1;
break;
case 8:
score += 0.0157666947615956;
done = 1;
break;
case 9:
score += -0.0013520790853585;
done = 1;
break;
};
/* Tree 40 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (!strcmp (X3,"d")||!strcmp (X3,"c")||!strcmp (X3,"b")) {node = 1;
} else if (!strcmp (X3,"a")) {node = 5;
} else {node = 9;
} 
 break; 
case 1:
 if (X2== MISSING) {node = 4;
} else if (X2<= 0.175449703121558) {node = 2;
} else {node = 3;
} 
 break; 
case 2:
score += -0.029412803255855;
done = 1;
break;
case 3:
score += -0.00254564855462648;
done = 1;
break;
case 4:
score += -0.00543458992034998;
done = 1;
break;
case 5:
 if (X2== MISSING) {node = 8;
} else if (X2<= 0.31352063966915) {node = 6;
} else {node = 7;
} 
 break; 
case 6:
score += -0.0107602098249704;
done = 1;
break;
case 7:
score += 0.0221684300730979;
done = 1;
break;
case 8:
score += 0.0154798000938028;
done = 1;
break;
case 9:
score += -8.05060767268778e-05;
done = 1;
break;
};
/* Tree 41 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X2== MISSING) {node = 9;
} else if (X2<= 1.36657645902596) {node = 1;
} else {node = 5;
} 
 break; 
case 1:
 if (!strcmp (X3,"d")) {node = 2;
} else if (!strcmp (X3,"c")||!strcmp (X3,"b")||!strcmp (X3,"a")) {node = 3;
} else {node = 4;
} 
 break; 
case 2:
score += -0.0238360648651546;
done = 1;
break;
case 3:
score += 0.00187157436195828;
done = 1;
break;
case 4:
score += -0.00708937416863536;
done = 1;
break;
case 5:
 if (X1== MISSING) {node = 8;
} else if (X1<= 0.751451854594052) {node = 6;
} else {node = 7;
} 
 break; 
case 6:
score += 0.00142017891484829;
done = 1;
break;
case 7:
score += 0.0483837197719446;
done = 1;
break;
case 8:
score += 0.0220377234614909;
done = 1;
break;
case 9:
score += 0.0010761052161445;
done = 1;
break;
};
/* Tree 42 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (!strcmp (X3,"d")) {node = 1;
} else if (!strcmp (X3,"c")||!strcmp (X3,"b")||!strcmp (X3,"a")) {node = 5;
} else {node = 9;
} 
 break; 
case 1:
 if (X2== MISSING) {node = 4;
} else if (X2<= 0.286941573489457) {node = 2;
} else {node = 3;
} 
 break; 
case 2:
score += -0.0474417007229297;
done = 1;
break;
case 3:
score += -0.0119489625101145;
done = 1;
break;
case 4:
score += -0.0173714641815168;
done = 1;
break;
case 5:
 if (X2== MISSING) {node = 8;
} else if (X2<= 0.175449703121558) {node = 6;
} else {node = 7;
} 
 break; 
case 6:
score += -0.0251383058033492;
done = 1;
break;
case 7:
score += 0.00966279735590172;
done = 1;
break;
case 8:
score += 0.00614358467687634;
done = 1;
break;
case 9:
score += -0.000628749394340896;
done = 1;
break;
};
/* Tree 43 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X2== MISSING) {node = 9;
} else if (X2<= 1.36304956348613) {node = 1;
} else {node = 5;
} 
 break; 
case 1:
 if (!strcmp (X3,"d")) {node = 2;
} else if (!strcmp (X3,"c")||!strcmp (X3,"b")||!strcmp (X3,"a")) {node = 3;
} else {node = 4;
} 
 break; 
case 2:
score += -0.0243504000964551;
done = 1;
break;
case 3:
score += -0.00284186193494867;
done = 1;
break;
case 4:
score += -0.00905820244405459;
done = 1;
break;
case 5:
 if (!strcmp (X3,"d")||!strcmp (X3,"c")||!strcmp (X3,"b")) {node = 6;
} else if (!strcmp (X3,"a")) {node = 7;
} else {node = 8;
} 
 break; 
case 6:
score += 0.00712600132937738;
done = 1;
break;
case 7:
score += 0.0346827592570107;
done = 1;
break;
case 8:
score += 0.0149993607372726;
done = 1;
break;
case 9:
score += -0.00164847298420581;
done = 1;
break;
};
/* Tree 44 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X2== MISSING) {node = 9;
} else if (X2<= 1.36304956348613) {node = 1;
} else {node = 5;
} 
 break; 
case 1:
 if (!strcmp (X3,"d")) {node = 2;
} else if (!strcmp (X3,"c")||!strcmp (X3,"b")||!strcmp (X3,"a")) {node = 3;
} else {node = 4;
} 
 break; 
case 2:
score += -0.0170490950959138;
done = 1;
break;
case 3:
score += 0.00154620116592615;
done = 1;
break;
case 4:
score += -0.00358353573389175;
done = 1;
break;
case 5:
 if (X1== MISSING) {node = 8;
} else if (X1<= 0.642797200940549) {node = 6;
} else {node = 7;
} 
 break; 
case 6:
score += -0.00556781685891996;
done = 1;
break;
case 7:
score += 0.0253173485102751;
done = 1;
break;
case 8:
score += 0.0217739798742913;
done = 1;
break;
case 9:
score += 0.00238331523890765;
done = 1;
break;
};
/* Tree 45 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X2== MISSING) {node = 9;
} else if (X2<= 0.195578099228442) {node = 1;
} else {node = 2;
} 
 break; 
case 1:
score += -0.0265492191717542;
done = 1;
break;
case 2:
 if (!strcmp (X3,"d")||!strcmp (X3,"c")||!strcmp (X3,"b")) {node = 3;
} else if (!strcmp (X3,"a")) {node = 7;
} else {node = 8;
} 
 break; 
case 3:
 if (X1== MISSING) {node = 6;
} else if (X1<= 0.821693115751259) {node = 4;
} else {node = 5;
} 
 break; 
case 4:
score += -0.00620889476046985;
done = 1;
break;
case 5:
score += 0.0284098242711734;
done = 1;
break;
case 6:
score += -0.00579818339043435;
done = 1;
break;
case 7:
score += 0.0168631925778326;
done = 1;
break;
case 8:
score += 0.00150486913858815;
done = 1;
break;
case 9:
score += -0.00186162145865293;
done = 1;
break;
};
/* Tree 46 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X1== MISSING) {node = 6;
} else if (X1<= 0.759425182128325) {node = 1;
} else {node = 2;
} 
 break; 
case 1:
score += -0.00364551276366201;
done = 1;
break;
case 2:
 if (X2== MISSING) {node = 5;
} else if (X2<= 1.01915283408016) {node = 3;
} else {node = 4;
} 
 break; 
case 3:
score += 0.00499815939406767;
done = 1;
break;
case 4:
score += 0.0393523201801004;
done = 1;
break;
case 5:
score += 0.0221752397870841;
done = 1;
break;
case 6:
 if (X2== MISSING) {node = 9;
} else if (X2<= 1.19299399410374) {node = 7;
} else {node = 8;
} 
 break; 
case 7:
score += -0.0115359809226826;
done = 1;
break;
case 8:
score += 0.00912874108168619;
done = 1;
break;
case 9:
score += -0.00357498146198317;
done = 1;
break;
};
/* Tree 47 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X1== MISSING) {node = 6;
} else if (X1<= 0.439953732071444) {node = 1;
} else {node = 2;
} 
 break; 
case 1:
score += -0.0101219813876338;
done = 1;
break;
case 2:
 if (!strcmp (X4,"a")||!strcmp (X4,"b")) {node = 3;
} else if (!strcmp (X4,"c")||!strcmp (X4,"d")||!strcmp (X4,"e")||!strcmp (X4,"f")) {node = 4;
} else {node = 5;
} 
 break; 
case 3:
score += -0.0106929674842231;
done = 1;
break;
case 4:
score += 0.0169722030122476;
done = 1;
break;
case 5:
score += 0.020461468364172;
done = 1;
break;
case 6:
 if (!strcmp (X3,"d")||!strcmp (X3,"c")) {node = 7;
} else if (!strcmp (X3,"b")||!strcmp (X3,"a")) {node = 8;
} else {node = 9;
} 
 break; 
case 7:
score += -0.0106642898759015;
done = 1;
break;
case 8:
score += 0.00526473193037507;
done = 1;
break;
case 9:
score += -0.0041360022503783;
done = 1;
break;
};
/* Tree 48 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (!strcmp (X3,"d")) {node = 1;
} else if (!strcmp (X3,"c")||!strcmp (X3,"b")||!strcmp (X3,"a")) {node = 2;
} else {node = 9;
} 
 break; 
case 1:
score += -0.0152384073742083;
done = 1;
break;
case 2:
 if (X2== MISSING) {node = 8;
} else if (X2<= 0.200975314015523) {node = 3;
} else {node = 4;
} 
 break; 
case 3:
score += -0.0227649165489071;
done = 1;
break;
case 4:
 if (!strcmp (X3,"d")||!strcmp (X3,"c")||!strcmp (X3,"b")) {node = 5;
} else if (!strcmp (X3,"a")) {node = 6;
} else {node = 7;
} 
 break; 
case 5:
score += 0.00214515901316309;
done = 1;
break;
case 6:
score += 0.0192090568038866;
done = 1;
break;
case 7:
score += 0.00742684166267274;
done = 1;
break;
case 8:
score += 0.00495210738303505;
done = 1;
break;
case 9:
score += -0.000458950571906165;
done = 1;
break;
};
/* Tree 49 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X2== MISSING) {node = 9;
} else if (X2<= 1.35701907775365) {node = 1;
} else {node = 5;
} 
 break; 
case 1:
 if (!strcmp (X3,"d")) {node = 2;
} else if (!strcmp (X3,"c")||!strcmp (X3,"b")||!strcmp (X3,"a")) {node = 3;
} else {node = 4;
} 
 break; 
case 2:
score += -0.0167193072762197;
done = 1;
break;
case 3:
score += 0.0016647431902996;
done = 1;
break;
case 4:
score += -0.00386109856842296;
done = 1;
break;
case 5:
 if (X1== MISSING) {node = 8;
} else if (X1<= 0.768832739209756) {node = 6;
} else {node = 7;
} 
 break; 
case 6:
score += 0.00238992382906022;
done = 1;
break;
case 7:
score += 0.0383308614768673;
done = 1;
break;
case 8:
score += 0.0190982982562675;
done = 1;
break;
case 9:
score += 0.00219538725461444;
done = 1;
break;
};
/* Tree 50 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X1== MISSING) {node = 3;
} else if (X1<= 0.527091237250715) {node = 1;
} else {node = 2;
} 
 break; 
case 1:
score += -0.0103702971084281;
done = 1;
break;
case 2:
score += 0.0149694024850996;
done = 1;
break;
case 3:
 if (X2== MISSING) {node = 9;
} else if (X2<= 0.476234622299671) {node = 4;
} else {node = 5;
} 
 break; 
case 4:
score += -0.0186906874600594;
done = 1;
break;
case 5:
 if (!strcmp (X3,"d")||!strcmp (X3,"c")||!strcmp (X3,"b")) {node = 6;
} else if (!strcmp (X3,"a")) {node = 7;
} else {node = 8;
} 
 break; 
case 6:
score += -0.00216427031197965;
done = 1;
break;
case 7:
score += 0.0193574730044666;
done = 1;
break;
case 8:
score += 0.0045612744744098;
done = 1;
break;
case 9:
score += -0.00083318069438706;
done = 1;
break;
};
/* Tree 51 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (!strcmp (X3,"d")) {node = 1;
} else if (!strcmp (X3,"c")||!strcmp (X3,"b")||!strcmp (X3,"a")) {node = 2;
} else {node = 9;
} 
 break; 
case 1:
score += -0.0127272818653008;
done = 1;
break;
case 2:
 if (X2== MISSING) {node = 8;
} else if (X2<= 1.11627210001461) {node = 3;
} else {node = 4;
} 
 break; 
case 3:
score += -0.000362112485887656;
done = 1;
break;
case 4:
 if (X1== MISSING) {node = 7;
} else if (X1<= 0.770274001639336) {node = 5;
} else {node = 6;
} 
 break; 
case 5:
score += 0.010034493322352;
done = 1;
break;
case 6:
score += 0.0420042646082558;
done = 1;
break;
case 7:
score += 0.0154974055711797;
done = 1;
break;
case 8:
score += 0.00622799059113195;
done = 1;
break;
case 9:
score += 0.000844693213505043;
done = 1;
break;
};
/* Tree 52 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X1== MISSING) {node = 3;
} else if (X1<= 0.5453383178683) {node = 1;
} else {node = 2;
} 
 break; 
case 1:
score += -0.011932218739917;
done = 1;
break;
case 2:
score += 0.0110568904149328;
done = 1;
break;
case 3:
 if (X2== MISSING) {node = 9;
} else if (X2<= 1.20126180164516) {node = 4;
} else {node = 5;
} 
 break; 
case 4:
score += -0.0111980403644872;
done = 1;
break;
case 5:
 if (!strcmp (X4,"a")||!strcmp (X4,"c")||!strcmp (X4,"d")||!strcmp (X4,"e")) {node = 6;
} else if (!strcmp (X4,"b")||!strcmp (X4,"f")) {node = 7;
} else {node = 8;
} 
 break; 
case 6:
score += 0.00928767396592344;
done = 1;
break;
case 7:
score += 0.0263049148250663;
done = 1;
break;
case 8:
score += -0.00894603883346986;
done = 1;
break;
case 9:
score += -0.00268000993906039;
done = 1;
break;
};
/* Tree 53 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X2== MISSING) {node = 9;
} else if (X2<= 0.172422980656847) {node = 1;
} else {node = 2;
} 
 break; 
case 1:
score += -0.0230677985609729;
done = 1;
break;
case 2:
 if (!strcmp (X3,"d")) {node = 3;
} else if (!strcmp (X3,"c")||!strcmp (X3,"b")||!strcmp (X3,"a")) {node = 7;
} else {node = 8;
} 
 break; 
case 3:
 if (X2== MISSING) {node = 6;
} else if (X2<= 1.36657645902596) {node = 4;
} else {node = 5;
} 
 break; 
case 4:
score += -0.0123258559625963;
done = 1;
break;
case 5:
score += 0.0132425250415982;
done = 1;
break;
case 6:
score += -0.00664399351721972;
done = 1;
break;
case 7:
score += 0.00563945885741352;
done = 1;
break;
case 8:
score += 0.0022303949825153;
done = 1;
break;
case 9:
score += -9.7038823485607e-05;
done = 1;
break;
};
/* Tree 54 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X2== MISSING) {node = 9;
} else if (X2<= 0.445292555494234) {node = 1;
} else {node = 2;
} 
 break; 
case 1:
score += -0.0186754954304657;
done = 1;
break;
case 2:
 if (!strcmp (X3,"d")||!strcmp (X3,"c")||!strcmp (X3,"b")) {node = 3;
} else if (!strcmp (X3,"a")) {node = 7;
} else {node = 8;
} 
 break; 
case 3:
 if (X2== MISSING) {node = 6;
} else if (X2<= 1.84931063163094) {node = 4;
} else {node = 5;
} 
 break; 
case 4:
score += -0.00395114246858181;
done = 1;
break;
case 5:
score += 0.0241817429150049;
done = 1;
break;
case 6:
score += -0.00178707436215206;
done = 1;
break;
case 7:
score += 0.015252339194651;
done = 1;
break;
case 8:
score += 0.00229150867006145;
done = 1;
break;
case 9:
score += -0.0029083083468693;
done = 1;
break;
};
/* Tree 55 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X2== MISSING) {node = 9;
} else if (X2<= 1.36304956348613) {node = 1;
} else {node = 5;
} 
 break; 
case 1:
 if (!strcmp (X3,"d")) {node = 2;
} else if (!strcmp (X3,"c")||!strcmp (X3,"b")||!strcmp (X3,"a")) {node = 3;
} else {node = 4;
} 
 break; 
case 2:
score += -0.013964570509527;
done = 1;
break;
case 3:
score += -0.000108663782650454;
done = 1;
break;
case 4:
score += -0.00399804110949299;
done = 1;
break;
case 5:
 if (X1== MISSING) {node = 8;
} else if (X1<= 0.396365355118178) {node = 6;
} else {node = 7;
} 
 break; 
case 6:
score += -0.0104593518908896;
done = 1;
break;
case 7:
score += 0.0215027949352949;
done = 1;
break;
case 8:
score += 0.0136118483953949;
done = 1;
break;
case 9:
score += 0.00107251242699519;
done = 1;
break;
};
/* Tree 56 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (!strcmp (X3,"d")||!strcmp (X3,"c")||!strcmp (X3,"b")) {node = 1;
} else if (!strcmp (X3,"a")) {node = 8;
} else {node = 9;
} 
 break; 
case 1:
 if (X1== MISSING) {node = 7;
} else if (X1<= 0.268921238020994) {node = 2;
} else {node = 3;
} 
 break; 
case 2:
score += -0.025192261228599;
done = 1;
break;
case 3:
 if (X2== MISSING) {node = 6;
} else if (X2<= 1.68062304635532) {node = 4;
} else {node = 5;
} 
 break; 
case 4:
score += -0.00437381171660802;
done = 1;
break;
case 5:
score += 0.0230177692362637;
done = 1;
break;
case 6:
score += 8.84123585145484e-06;
done = 1;
break;
case 7:
score += -0.00543827933874153;
done = 1;
break;
case 8:
score += 0.00927860284779225;
done = 1;
break;
case 9:
score += -0.00185240999278412;
done = 1;
break;
};
/* Tree 57 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X1== MISSING) {node = 6;
} else if (X1<= 0.777153475442901) {node = 1;
} else {node = 5;
} 
 break; 
case 1:
 if (X1== MISSING) {node = 4;
} else if (X1<= 0.204028634354472) {node = 2;
} else {node = 3;
} 
 break; 
case 2:
score += -0.0179853984419071;
done = 1;
break;
case 3:
score += -0.00151932388983994;
done = 1;
break;
case 4:
score += -0.0058073641377741;
done = 1;
break;
case 5:
score += 0.0179108245312693;
done = 1;
break;
case 6:
 if (X2== MISSING) {node = 9;
} else if (X2<= 1.19405761850066) {node = 7;
} else {node = 8;
} 
 break; 
case 7:
score += -0.00679216223446478;
done = 1;
break;
case 8:
score += 0.0107986510419828;
done = 1;
break;
case 9:
score += -0.000470463713241443;
done = 1;
break;
};
/* Tree 58 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X2== MISSING) {node = 9;
} else if (X2<= 1.04488538135774) {node = 1;
} else {node = 5;
} 
 break; 
case 1:
 if (X2== MISSING) {node = 4;
} else if (X2<= 0.0870796095114201) {node = 2;
} else {node = 3;
} 
 break; 
case 2:
score += -0.0256413545086933;
done = 1;
break;
case 3:
score += -0.00279276439870859;
done = 1;
break;
case 4:
score += -0.00485548433919333;
done = 1;
break;
case 5:
 if (!strcmp (X3,"d")||!strcmp (X3,"c")) {node = 6;
} else if (!strcmp (X3,"b")||!strcmp (X3,"a")) {node = 7;
} else {node = 8;
} 
 break; 
case 6:
score += 0.00383777375350511;
done = 1;
break;
case 7:
score += 0.0179049072448062;
done = 1;
break;
case 8:
score += 0.0103405052730688;
done = 1;
break;
case 9:
score += 0.00158761525640583;
done = 1;
break;
};
/* Tree 59 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (!strcmp (X3,"d")) {node = 1;
} else if (!strcmp (X3,"c")||!strcmp (X3,"b")||!strcmp (X3,"a")) {node = 5;
} else {node = 9;
} 
 break; 
case 1:
 if (X2== MISSING) {node = 4;
} else if (X2<= 1.68937375466339) {node = 2;
} else {node = 3;
} 
 break; 
case 2:
score += -0.0143741949518581;
done = 1;
break;
case 3:
score += 0.00830230645669;
done = 1;
break;
case 4:
score += -0.0110394153329539;
done = 1;
break;
case 5:
 if (X2== MISSING) {node = 8;
} else if (X2<= 0.139039114117622) {node = 6;
} else {node = 7;
} 
 break; 
case 6:
score += -0.0198044165538045;
done = 1;
break;
case 7:
score += 0.00602143667434482;
done = 1;
break;
case 8:
score += 0.0040348325798718;
done = 1;
break;
case 9:
score += -6.53628524168035e-05;
done = 1;
break;
};
/* Tree 60 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X2== MISSING) {node = 9;
} else if (X2<= 0.363670230843127) {node = 1;
} else {node = 5;
} 
 break; 
case 1:
 if (X1== MISSING) {node = 4;
} else if (X1<= 0.506572104990482) {node = 2;
} else {node = 3;
} 
 break; 
case 2:
score += -0.0208369190645137;
done = 1;
break;
case 3:
score += 0.00205900839464379;
done = 1;
break;
case 4:
score += -0.0148399472850008;
done = 1;
break;
case 5:
 if (!strcmp (X3,"d")||!strcmp (X3,"c")||!strcmp (X3,"b")) {node = 6;
} else if (!strcmp (X3,"a")) {node = 7;
} else {node = 8;
} 
 break; 
case 6:
score += 0.000814897340084446;
done = 1;
break;
case 7:
score += 0.0130368091501217;
done = 1;
break;
case 8:
score += 0.00385517390974546;
done = 1;
break;
case 9:
score += 0.00071422538278151;
done = 1;
break;
};
/* Tree 61 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (!strcmp (X3,"d")) {node = 1;
} else if (!strcmp (X3,"c")||!strcmp (X3,"b")||!strcmp (X3,"a")) {node = 5;
} else {node = 9;
} 
 break; 
case 1:
 if (X2== MISSING) {node = 4;
} else if (X2<= 0.286941573489457) {node = 2;
} else {node = 3;
} 
 break; 
case 2:
score += -0.0378617968300515;
done = 1;
break;
case 3:
score += -0.00861835550774848;
done = 1;
break;
case 4:
score += -0.0131173464804105;
done = 1;
break;
case 5:
 if (!strcmp (X3,"d")||!strcmp (X3,"c")||!strcmp (X3,"b")) {node = 6;
} else if (!strcmp (X3,"a")) {node = 7;
} else {node = 8;
} 
 break; 
case 6:
score += -0.000142386578541771;
done = 1;
break;
case 7:
score += 0.01215971725582;
done = 1;
break;
case 8:
score += 0.00484495281376706;
done = 1;
break;
case 9:
score += 0.000174754997280898;
done = 1;
break;
};
/* Tree 62 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X1== MISSING) {node = 3;
} else if (X1<= 0.271596576203592) {node = 1;
} else {node = 2;
} 
 break; 
case 1:
score += -0.0139267711902077;
done = 1;
break;
case 2:
score += 0.00305253224995421;
done = 1;
break;
case 3:
 if (X6== MISSING) {node = 9;
} else if (X6<= 0.371673060581088) {node = 4;
} else {node = 5;
} 
 break; 
case 4:
score += 0.017892488272906;
done = 1;
break;
case 5:
 if (!strcmp (X3,"d")||!strcmp (X3,"c")||!strcmp (X3,"b")) {node = 6;
} else if (!strcmp (X3,"a")) {node = 7;
} else {node = 8;
} 
 break; 
case 6:
score += -0.00638608696373577;
done = 1;
break;
case 7:
score += 0.00930038743856404;
done = 1;
break;
case 8:
score += -0.00243036733185147;
done = 1;
break;
case 9:
score += 0.000320094328942772;
done = 1;
break;
};
/* Tree 63 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X1== MISSING) {node = 3;
} else if (X1<= 0.402585463714786) {node = 1;
} else {node = 2;
} 
 break; 
case 1:
score += -0.0135670214147395;
done = 1;
break;
case 2:
score += 0.00506641022106751;
done = 1;
break;
case 3:
 if (X2== MISSING) {node = 9;
} else if (X2<= 1.36308989441022) {node = 4;
} else {node = 5;
} 
 break; 
case 4:
score += -0.00457666278769169;
done = 1;
break;
case 5:
 if (!strcmp (X4,"a")||!strcmp (X4,"c")||!strcmp (X4,"d")||!strcmp (X4,"e")) {node = 6;
} else if (!strcmp (X4,"b")||!strcmp (X4,"f")) {node = 7;
} else {node = 8;
} 
 break; 
case 6:
score += 0.0042924055112636;
done = 1;
break;
case 7:
score += 0.0283168931137826;
done = 1;
break;
case 8:
score += -0.00691012695291819;
done = 1;
break;
case 9:
score += 0.000213987804628817;
done = 1;
break;
};
/* Tree 64 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X2== MISSING) {node = 9;
} else if (X2<= 0.316256216028705) {node = 1;
} else {node = 5;
} 
 break; 
case 1:
 if (X1== MISSING) {node = 4;
} else if (X1<= 0.476176272262819) {node = 2;
} else {node = 3;
} 
 break; 
case 2:
score += -0.0281594707665812;
done = 1;
break;
case 3:
score += 0.00289728199883643;
done = 1;
break;
case 4:
score += -0.0116796772423383;
done = 1;
break;
case 5:
 if (X2== MISSING) {node = 8;
} else if (X2<= 1.16126977768727) {node = 6;
} else {node = 7;
} 
 break; 
case 6:
score += -0.000212309249385715;
done = 1;
break;
case 7:
score += 0.00788137045249574;
done = 1;
break;
case 8:
score += 0.00373582719055646;
done = 1;
break;
case 9:
score += 0.00111815436917148;
done = 1;
break;
};
/* Tree 65 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X1== MISSING) {node = 3;
} else if (X1<= 0.766128863091581) {node = 1;
} else {node = 2;
} 
 break; 
case 1:
score += -0.00314976360843631;
done = 1;
break;
case 2:
score += 0.0166727733816836;
done = 1;
break;
case 3:
 if (X2== MISSING) {node = 9;
} else if (X2<= 0.549674147972837) {node = 4;
} else {node = 5;
} 
 break; 
case 4:
score += -0.0134420142280903;
done = 1;
break;
case 5:
 if (!strcmp (X4,"a")||!strcmp (X4,"c")||!strcmp (X4,"d")||!strcmp (X4,"e")) {node = 6;
} else if (!strcmp (X4,"b")||!strcmp (X4,"f")) {node = 7;
} else {node = 8;
} 
 break; 
case 6:
score += -0.00419141494139205;
done = 1;
break;
case 7:
score += 0.0163978150538289;
done = 1;
break;
case 8:
score += 0.00729667670363975;
done = 1;
break;
case 9:
score += -0.00171932328618241;
done = 1;
break;
};
/* Tree 66 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X2== MISSING) {node = 9;
} else if (X2<= 0.426169228274375) {node = 1;
} else {node = 2;
} 
 break; 
case 1:
score += -0.0131692620860762;
done = 1;
break;
case 2:
 if (!strcmp (X3,"d")) {node = 3;
} else if (!strcmp (X3,"c")||!strcmp (X3,"b")||!strcmp (X3,"a")) {node = 4;
} else {node = 8;
} 
 break; 
case 3:
score += -0.00698280892910441;
done = 1;
break;
case 4:
 if (!strcmp (X4,"a")||!strcmp (X4,"c")||!strcmp (X4,"d")) {node = 5;
} else if (!strcmp (X4,"b")||!strcmp (X4,"e")||!strcmp (X4,"f")) {node = 6;
} else {node = 7;
} 
 break; 
case 5:
score += 0.000810531453906665;
done = 1;
break;
case 6:
score += 0.0140747033705889;
done = 1;
break;
case 7:
score += 0.0145282684545697;
done = 1;
break;
case 8:
score += 0.00429326195437453;
done = 1;
break;
case 9:
score += 0.000521356761637166;
done = 1;
break;
};
/* Tree 67 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X1== MISSING) {node = 6;
} else if (X1<= 0.273028151248582) {node = 1;
} else {node = 2;
} 
 break; 
case 1:
score += -0.013246902406208;
done = 1;
break;
case 2:
 if (!strcmp (X4,"a")||!strcmp (X4,"b")||!strcmp (X4,"c")||!strcmp (X4,"f")) {node = 3;
} else if (!strcmp (X4,"d")||!strcmp (X4,"e")) {node = 4;
} else {node = 5;
} 
 break; 
case 3:
score += -0.00190292140181206;
done = 1;
break;
case 4:
score += 0.014484658286128;
done = 1;
break;
case 5:
score += 0.00509016519314451;
done = 1;
break;
case 6:
 if (X2== MISSING) {node = 9;
} else if (X2<= 1.84815811365843) {node = 7;
} else {node = 8;
} 
 break; 
case 7:
score += -0.00310301026209246;
done = 1;
break;
case 8:
score += 0.0256178908687657;
done = 1;
break;
case 9:
score += -0.00092718441884563;
done = 1;
break;
};
/* Tree 68 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (!strcmp (X3,"d")||!strcmp (X3,"c")||!strcmp (X3,"b")) {node = 1;
} else if (!strcmp (X3,"a")) {node = 8;
} else {node = 9;
} 
 break; 
case 1:
 if (X2== MISSING) {node = 7;
} else if (X2<= 1.85876426706091) {node = 2;
} else {node = 6;
} 
 break; 
case 2:
 if (X1== MISSING) {node = 5;
} else if (X1<= 0.864855982246809) {node = 3;
} else {node = 4;
} 
 break; 
case 3:
score += -0.00951488210115248;
done = 1;
break;
case 4:
score += 0.0116386791238608;
done = 1;
break;
case 5:
score += -0.0076468743645331;
done = 1;
break;
case 6:
score += 0.0168450181169465;
done = 1;
break;
case 7:
score += -0.00579532423587929;
done = 1;
break;
case 8:
score += 0.0101132051765112;
done = 1;
break;
case 9:
score += -0.00197727717690556;
done = 1;
break;
};
/* Tree 69 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (!strcmp (X3,"d")) {node = 1;
} else if (!strcmp (X3,"c")||!strcmp (X3,"b")||!strcmp (X3,"a")) {node = 2;
} else {node = 9;
} 
 break; 
case 1:
score += -0.00876967448057885;
done = 1;
break;
case 2:
 if (X2== MISSING) {node = 8;
} else if (X2<= 0.857821721583605) {node = 3;
} else {node = 4;
} 
 break; 
case 3:
score += -0.00315322451250204;
done = 1;
break;
case 4:
 if (X1== MISSING) {node = 7;
} else if (X1<= 0.58532000053674) {node = 5;
} else {node = 6;
} 
 break; 
case 5:
score += -0.00212756788998919;
done = 1;
break;
case 6:
score += 0.0168174167818796;
done = 1;
break;
case 7:
score += 0.00773194889389235;
done = 1;
break;
case 8:
score += 0.00283259639391564;
done = 1;
break;
case 9:
score += 9.44604675349407e-05;
done = 1;
break;
};
/* Tree 70 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X1== MISSING) {node = 6;
} else if (X1<= 0.548202035482973) {node = 1;
} else {node = 2;
} 
 break; 
case 1:
score += -0.00535264179500465;
done = 1;
break;
case 2:
 if (!strcmp (X4,"a")||!strcmp (X4,"b")||!strcmp (X4,"c")) {node = 3;
} else if (!strcmp (X4,"d")||!strcmp (X4,"e")||!strcmp (X4,"f")) {node = 4;
} else {node = 5;
} 
 break; 
case 3:
score += -0.00182422637204675;
done = 1;
break;
case 4:
score += 0.0173135878976032;
done = 1;
break;
case 5:
score += 0.016218138759351;
done = 1;
break;
case 6:
 if (X2== MISSING) {node = 9;
} else if (X2<= 0.852691299514845) {node = 7;
} else {node = 8;
} 
 break; 
case 7:
score += -0.00728083545801392;
done = 1;
break;
case 8:
score += 0.00321362878915791;
done = 1;
break;
case 9:
score += -0.00161835474910826;
done = 1;
break;
};
/* Tree 71 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X1== MISSING) {node = 6;
} else if (X1<= 0.3817074917024) {node = 1;
} else {node = 5;
} 
 break; 
case 1:
 if (!strcmp (X3,"d")) {node = 2;
} else if (!strcmp (X3,"c")||!strcmp (X3,"b")||!strcmp (X3,"a")) {node = 3;
} else {node = 4;
} 
 break; 
case 2:
score += -0.0245368553935863;
done = 1;
break;
case 3:
score += -0.00568920780955563;
done = 1;
break;
case 4:
score += -0.0105895961814036;
done = 1;
break;
case 5:
score += 0.00325884898930429;
done = 1;
break;
case 6:
 if (X6== MISSING) {node = 9;
} else if (X6<= 0.752479807357304) {node = 7;
} else {node = 8;
} 
 break; 
case 7:
score += 0.00450554683111683;
done = 1;
break;
case 8:
score += -0.00709601870727673;
done = 1;
break;
case 9:
score += -0.00354070023583355;
done = 1;
break;
};
/* Tree 72 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (!strcmp (X3,"d")||!strcmp (X3,"c")||!strcmp (X3,"b")) {node = 1;
} else if (!strcmp (X3,"a")) {node = 8;
} else {node = 9;
} 
 break; 
case 1:
 if (X1== MISSING) {node = 4;
} else if (X1<= 0.186444195569493) {node = 2;
} else {node = 3;
} 
 break; 
case 2:
score += -0.0221031583776245;
done = 1;
break;
case 3:
score += -0.000287910679955208;
done = 1;
break;
case 4:
 if (X6== MISSING) {node = 7;
} else if (X6<= 2.19404361653142) {node = 5;
} else {node = 6;
} 
 break; 
case 5:
score += 0.00244681504553098;
done = 1;
break;
case 6:
score += -0.0116009703205457;
done = 1;
break;
case 7:
score += -0.00184145627674507;
done = 1;
break;
case 8:
score += 0.0098230756456751;
done = 1;
break;
case 9:
score += 0.000522571466673413;
done = 1;
break;
};
/* Tree 73 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X1== MISSING) {node = 3;
} else if (X1<= 0.518572649569251) {node = 1;
} else {node = 2;
} 
 break; 
case 1:
score += -0.00686730468292598;
done = 1;
break;
case 2:
score += 0.00768185134270437;
done = 1;
break;
case 3:
 if (!strcmp (X3,"d")) {node = 4;
} else if (!strcmp (X3,"c")||!strcmp (X3,"b")||!strcmp (X3,"a")) {node = 5;
} else {node = 9;
} 
 break; 
case 4:
score += -0.0120120176434458;
done = 1;
break;
case 5:
 if (!strcmp (X4,"a")||!strcmp (X4,"c")) {node = 6;
} else if (!strcmp (X4,"b")||!strcmp (X4,"d")||!strcmp (X4,"e")||!strcmp (X4,"f")) {node = 7;
} else {node = 8;
} 
 break; 
case 6:
score += -0.00401128054853607;
done = 1;
break;
case 7:
score += 0.0130891994539234;
done = 1;
break;
case 8:
score += 0.00135391047043308;
done = 1;
break;
case 9:
score += -0.000845008281683564;
done = 1;
break;
};
/* Tree 74 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (!strcmp (X3,"d")||!strcmp (X3,"c")||!strcmp (X3,"b")) {node = 1;
} else if (!strcmp (X3,"a")) {node = 8;
} else {node = 9;
} 
 break; 
case 1:
 if (X6== MISSING) {node = 7;
} else if (X6<= 2.00730025966186) {node = 2;
} else {node = 6;
} 
 break; 
case 2:
 if (X2== MISSING) {node = 5;
} else if (X2<= 0.917341938475147) {node = 3;
} else {node = 4;
} 
 break; 
case 3:
score += -0.00579816671816002;
done = 1;
break;
case 4:
score += 0.00872485123258219;
done = 1;
break;
case 5:
score += 0.000962548534771699;
done = 1;
break;
case 6:
score += -0.0102606947049063;
done = 1;
break;
case 7:
score += -0.00286355711511853;
done = 1;
break;
case 8:
score += 0.00691733761061354;
done = 1;
break;
case 9:
score += 3.15877236981606e-05;
done = 1;
break;
};
/* Tree 75 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (!strcmp (X3,"d")) {node = 1;
} else if (!strcmp (X3,"c")||!strcmp (X3,"b")||!strcmp (X3,"a")) {node = 5;
} else {node = 9;
} 
 break; 
case 1:
 if (X2== MISSING) {node = 4;
} else if (X2<= 1.48915097420104) {node = 2;
} else {node = 3;
} 
 break; 
case 2:
score += -0.0106460093496988;
done = 1;
break;
case 3:
score += 0.00682020620550522;
done = 1;
break;
case 4:
score += -0.00673566258360838;
done = 1;
break;
case 5:
 if (X1== MISSING) {node = 8;
} else if (X1<= 0.776841260842048) {node = 6;
} else {node = 7;
} 
 break; 
case 6:
score += 0.00167235524788795;
done = 1;
break;
case 7:
score += 0.0182093693962913;
done = 1;
break;
case 8:
score += 0.00231775556411292;
done = 1;
break;
case 9:
score += 0.00114693987189204;
done = 1;
break;
};
/* Tree 76 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X2== MISSING) {node = 9;
} else if (X2<= 1.69238254940137) {node = 1;
} else {node = 5;
} 
 break; 
case 1:
 if (!strcmp (X3,"d")||!strcmp (X3,"c")||!strcmp (X3,"b")) {node = 2;
} else if (!strcmp (X3,"a")) {node = 3;
} else {node = 4;
} 
 break; 
case 2:
score += -0.0045594521764906;
done = 1;
break;
case 3:
score += 0.00602477128065745;
done = 1;
break;
case 4:
score += -0.00181539424315592;
done = 1;
break;
case 5:
 if (!strcmp (X3,"d")||!strcmp (X3,"c")) {node = 6;
} else if (!strcmp (X3,"b")||!strcmp (X3,"a")) {node = 7;
} else {node = 8;
} 
 break; 
case 6:
score += 0.00303761442144209;
done = 1;
break;
case 7:
score += 0.0331371416223639;
done = 1;
break;
case 8:
score += 0.0145462571747357;
done = 1;
break;
case 9:
score += 0.00040979034967734;
done = 1;
break;
};
/* Tree 77 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X1== MISSING) {node = 3;
} else if (X1<= 0.544580107904039) {node = 1;
} else {node = 2;
} 
 break; 
case 1:
score += -0.00745305980125379;
done = 1;
break;
case 2:
score += 0.00586788143127962;
done = 1;
break;
case 3:
 if (!strcmp (X3,"d")) {node = 4;
} else if (!strcmp (X3,"c")||!strcmp (X3,"b")||!strcmp (X3,"a")) {node = 8;
} else {node = 9;
} 
 break; 
case 4:
 if (X2== MISSING) {node = 7;
} else if (X2<= 1.07330128224567) {node = 5;
} else {node = 6;
} 
 break; 
case 5:
score += -0.0141515958449396;
done = 1;
break;
case 6:
score += 0.00471030968526327;
done = 1;
break;
case 7:
score += -0.00660683363285842;
done = 1;
break;
case 8:
score += 0.00498236059620049;
done = 1;
break;
case 9:
score += 0.00149688864761134;
done = 1;
break;
};
/* Tree 78 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (!strcmp (X3,"d")||!strcmp (X3,"c")) {node = 1;
} else if (!strcmp (X3,"b")||!strcmp (X3,"a")) {node = 5;
} else {node = 9;
} 
 break; 
case 1:
 if (X2== MISSING) {node = 4;
} else if (X2<= 0.195578099228442) {node = 2;
} else {node = 3;
} 
 break; 
case 2:
score += -0.0180658518046235;
done = 1;
break;
case 3:
score += -0.00201350480129653;
done = 1;
break;
case 4:
score += -0.00391600518687602;
done = 1;
break;
case 5:
 if (!strcmp (X4,"c")||!strcmp (X4,"e")) {node = 6;
} else if (!strcmp (X4,"a")||!strcmp (X4,"b")||!strcmp (X4,"d")||!strcmp (X4,"f")) {node = 7;
} else {node = 8;
} 
 break; 
case 6:
score += -0.00101609412633935;
done = 1;
break;
case 7:
score += 0.0115089684900499;
done = 1;
break;
case 8:
score += -0.00376092382189916;
done = 1;
break;
case 9:
score += -0.000372088550980806;
done = 1;
break;
};
/* Tree 79 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X2== MISSING) {node = 9;
} else if (X2<= 0.441025680629537) {node = 1;
} else {node = 2;
} 
 break; 
case 1:
score += -0.00757460319398566;
done = 1;
break;
case 2:
 if (!strcmp (X4,"a")) {node = 3;
} else if (!strcmp (X4,"b")||!strcmp (X4,"c")||!strcmp (X4,"d")||!strcmp (X4,"e")||!strcmp (X4,"f")) {node = 4;
} else {node = 8;
} 
 break; 
case 3:
score += -0.00983601366604077;
done = 1;
break;
case 4:
 if (X1== MISSING) {node = 7;
} else if (X1<= 0.836477663484402) {node = 5;
} else {node = 6;
} 
 break; 
case 5:
score += -0.00132934983358597;
done = 1;
break;
case 6:
score += 0.0172006625666731;
done = 1;
break;
case 7:
score += 0.00143087554358394;
done = 1;
break;
case 8:
score += 0.00746077218594754;
done = 1;
break;
case 9:
score += -0.000414760613160633;
done = 1;
break;
};
/* Tree 80 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X2== MISSING) {node = 9;
} else if (X2<= 1.36304956348613) {node = 1;
} else {node = 8;
} 
 break; 
case 1:
 if (X1== MISSING) {node = 4;
} else if (X1<= 0.518572649569251) {node = 2;
} else {node = 3;
} 
 break; 
case 2:
score += -0.00826465495282152;
done = 1;
break;
case 3:
score += 0.00465279459151905;
done = 1;
break;
case 4:
 if (!strcmp (X3,"d")) {node = 5;
} else if (!strcmp (X3,"c")||!strcmp (X3,"b")||!strcmp (X3,"a")) {node = 6;
} else {node = 7;
} 
 break; 
case 5:
score += -0.012359592607892;
done = 1;
break;
case 6:
score += 0.00214161142331717;
done = 1;
break;
case 7:
score += -0.00269212325375256;
done = 1;
break;
case 8:
score += 0.00855922545456476;
done = 1;
break;
case 9:
score += 0.000803317568735601;
done = 1;
break;
};
/* Tree 81 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X2== MISSING) {node = 9;
} else if (X2<= 0.195578099228442) {node = 1;
} else {node = 2;
} 
 break; 
case 1:
score += -0.0135483238992818;
done = 1;
break;
case 2:
 if (!strcmp (X5,"c")) {node = 3;
} else if (!strcmp (X5,"a")||!strcmp (X5,"b")) {node = 4;
} else {node = 8;
} 
 break; 
case 3:
score += -0.00439617053502027;
done = 1;
break;
case 4:
 if (X1== MISSING) {node = 7;
} else if (X1<= 0.784957550815307) {node = 5;
} else {node = 6;
} 
 break; 
case 5:
score += 0.0033390271174826;
done = 1;
break;
case 6:
score += 0.0195030677884981;
done = 1;
break;
case 7:
score += 0.00356151231500641;
done = 1;
break;
case 8:
score += 0.00203624607474116;
done = 1;
break;
case 9:
score += -8.3255441725963e-05;
done = 1;
break;
};
/* Tree 82 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X1== MISSING) {node = 6;
} else if (X1<= 0.271596576203592) {node = 1;
} else {node = 2;
} 
 break; 
case 1:
score += -0.00850105362195391;
done = 1;
break;
case 2:
 if (!strcmp (X4,"a")||!strcmp (X4,"b")||!strcmp (X4,"c")||!strcmp (X4,"e")||!strcmp (X4,"f")) {node = 3;
} else if (!strcmp (X4,"d")) {node = 4;
} else {node = 5;
} 
 break; 
case 3:
score += 0.00508528080778236;
done = 1;
break;
case 4:
score += 0.0173164509864861;
done = 1;
break;
case 5:
score += -0.00145674068857027;
done = 1;
break;
case 6:
 if (X2== MISSING) {node = 9;
} else if (X2<= 1.3537636611145) {node = 7;
} else {node = 8;
} 
 break; 
case 7:
score += -0.00362178717184052;
done = 1;
break;
case 8:
score += 0.00718737254963701;
done = 1;
break;
case 9:
score += 0.000667561923983898;
done = 1;
break;
};
/* Tree 83 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (!strcmp (X3,"d")||!strcmp (X3,"c")||!strcmp (X3,"b")) {node = 1;
} else if (!strcmp (X3,"a")) {node = 5;
} else {node = 9;
} 
 break; 
case 1:
 if (!strcmp (X4,"a")||!strcmp (X4,"e")) {node = 2;
} else if (!strcmp (X4,"b")||!strcmp (X4,"c")||!strcmp (X4,"d")||!strcmp (X4,"f")) {node = 3;
} else {node = 4;
} 
 break; 
case 2:
score += -0.0117427870226402;
done = 1;
break;
case 3:
score += -0.00130976085734807;
done = 1;
break;
case 4:
score += 0.0028226694047275;
done = 1;
break;
case 5:
 if (X2== MISSING) {node = 8;
} else if (X2<= 1.69106578850187) {node = 6;
} else {node = 7;
} 
 break; 
case 6:
score += 0.00470321378495605;
done = 1;
break;
case 7:
score += 0.0260660988324784;
done = 1;
break;
case 8:
score += 0.00784481452723875;
done = 1;
break;
case 9:
score += 0.000312283129615054;
done = 1;
break;
};
/* Tree 84 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X2== MISSING) {node = 9;
} else if (X2<= 0.284672361565754) {node = 1;
} else {node = 5;
} 
 break; 
case 1:
 if (!strcmp (X3,"d")) {node = 2;
} else if (!strcmp (X3,"c")||!strcmp (X3,"b")||!strcmp (X3,"a")) {node = 3;
} else {node = 4;
} 
 break; 
case 2:
score += -0.0270717005753321;
done = 1;
break;
case 3:
score += -0.00506218425742305;
done = 1;
break;
case 4:
score += -0.0105645633369003;
done = 1;
break;
case 5:
 if (X1== MISSING) {node = 8;
} else if (X1<= 0.415721896686591) {node = 6;
} else {node = 7;
} 
 break; 
case 6:
score += -0.00242138055791006;
done = 1;
break;
case 7:
score += 0.00776965073016678;
done = 1;
break;
case 8:
score += -0.000704499057564875;
done = 1;
break;
case 9:
score += -0.000862862486479397;
done = 1;
break;
};
/* Tree 85 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X1== MISSING) {node = 3;
} else if (X1<= 0.729670197120868) {node = 1;
} else {node = 2;
} 
 break; 
case 1:
score += -0.00436096853045566;
done = 1;
break;
case 2:
score += 0.00352286319242573;
done = 1;
break;
case 3:
 if (X2== MISSING) {node = 9;
} else if (X2<= 1.68365727365017) {node = 4;
} else {node = 8;
} 
 break; 
case 4:
 if (X6== MISSING) {node = 7;
} else if (X6<= 0.855374861857854) {node = 5;
} else {node = 6;
} 
 break; 
case 5:
score += 0.00845580719532762;
done = 1;
break;
case 6:
score += -0.00446428938299025;
done = 1;
break;
case 7:
score += 0.000334603631813526;
done = 1;
break;
case 8:
score += 0.0119996007781609;
done = 1;
break;
case 9:
score += 0.00235531179889732;
done = 1;
break;
};
/* Tree 86 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X1== MISSING) {node = 6;
} else if (X1<= 0.770409485790879) {node = 1;
} else {node = 5;
} 
 break; 
case 1:
 if (!strcmp (X4,"a")||!strcmp (X4,"b")||!strcmp (X4,"e")||!strcmp (X4,"f")) {node = 2;
} else if (!strcmp (X4,"c")||!strcmp (X4,"d")) {node = 3;
} else {node = 4;
} 
 break; 
case 2:
score += -0.0114209441881248;
done = 1;
break;
case 3:
score += 0.00213042392762562;
done = 1;
break;
case 4:
score += -0.000325628494141888;
done = 1;
break;
case 5:
score += 0.0110454367593215;
done = 1;
break;
case 6:
 if (X2== MISSING) {node = 9;
} else if (X2<= 1.11813222034834) {node = 7;
} else {node = 8;
} 
 break; 
case 7:
score += -0.00543066014765278;
done = 1;
break;
case 8:
score += 0.00705113237205108;
done = 1;
break;
case 9:
score += -0.000160569972666706;
done = 1;
break;
};
/* Tree 87 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (!strcmp (X4,"a")||!strcmp (X4,"b")||!strcmp (X4,"c")||!strcmp (X4,"d")||!strcmp (X4,"e")) {node = 1;
} else if (!strcmp (X4,"f")) {node = 2;
} else {node = 3;
} 
 break; 
case 1:
score += -0.00191625391658852;
done = 1;
break;
case 2:
score += 0.014094043441492;
done = 1;
break;
case 3:
 if (X6== MISSING) {node = 9;
} else if (X6<= 2.31523662514519) {node = 4;
} else {node = 8;
} 
 break; 
case 4:
 if (X1== MISSING) {node = 7;
} else if (X1<= 0.379974885610864) {node = 5;
} else {node = 6;
} 
 break; 
case 5:
score += -0.0186783222549123;
done = 1;
break;
case 6:
score += 0.00132472989426751;
done = 1;
break;
case 7:
score += -0.0026519143284423;
done = 1;
break;
case 8:
score += 0.0105410752210209;
done = 1;
break;
case 9:
score += -0.00118593329836977;
done = 1;
break;
};
/* Tree 88 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X1== MISSING) {node = 3;
} else if (X1<= 0.785701503627934) {node = 1;
} else {node = 2;
} 
 break; 
case 1:
score += -0.00211394288442137;
done = 1;
break;
case 2:
score += 0.0139426948917995;
done = 1;
break;
case 3:
 if (!strcmp (X4,"a")||!strcmp (X4,"e")||!strcmp (X4,"f")) {node = 4;
} else if (!strcmp (X4,"b")||!strcmp (X4,"c")||!strcmp (X4,"d")) {node = 8;
} else {node = 9;
} 
 break; 
case 4:
 if (!strcmp (X3,"d")) {node = 5;
} else if (!strcmp (X3,"c")||!strcmp (X3,"b")||!strcmp (X3,"a")) {node = 6;
} else {node = 7;
} 
 break; 
case 5:
score += -0.0260420130846759;
done = 1;
break;
case 6:
score += -0.000896148268207345;
done = 1;
break;
case 7:
score += -0.00751348111464643;
done = 1;
break;
case 8:
score += 0.00364346565950302;
done = 1;
break;
case 9:
score += 0.00749731418062955;
done = 1;
break;
};
/* Tree 89 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (!strcmp (X4,"a")||!strcmp (X4,"b")||!strcmp (X4,"f")) {node = 1;
} else if (!strcmp (X4,"c")||!strcmp (X4,"d")||!strcmp (X4,"e")) {node = 2;
} else {node = 3;
} 
 break; 
case 1:
score += -0.00450874329692023;
done = 1;
break;
case 2:
score += -3.99129971067963e-05;
done = 1;
break;
case 3:
 if (!strcmp (X5,"c")) {node = 4;
} else if (!strcmp (X5,"a")||!strcmp (X5,"b")) {node = 5;
} else {node = 9;
} 
 break; 
case 4:
score += -0.00803428729250149;
done = 1;
break;
case 5:
 if (X6== MISSING) {node = 8;
} else if (X6<= 1.68279863032512) {node = 6;
} else {node = 7;
} 
 break; 
case 6:
score += -0.00173802928721026;
done = 1;
break;
case 7:
score += 0.0151224204323794;
done = 1;
break;
case 8:
score += 0.00617605935667878;
done = 1;
break;
case 9:
score += 0.002205521322349;
done = 1;
break;
};
/* Tree 90 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X1== MISSING) {node = 3;
} else if (X1<= 0.881398857804015) {node = 1;
} else {node = 2;
} 
 break; 
case 1:
score += -0.00312146136263449;
done = 1;
break;
case 2:
score += 0.0119650492649661;
done = 1;
break;
case 3:
 if (X2== MISSING) {node = 9;
} else if (X2<= 0.627509482437745) {node = 4;
} else {node = 5;
} 
 break; 
case 4:
score += -0.011806813481629;
done = 1;
break;
case 5:
 if (!strcmp (X4,"a")||!strcmp (X4,"c")) {node = 6;
} else if (!strcmp (X4,"b")||!strcmp (X4,"d")||!strcmp (X4,"e")||!strcmp (X4,"f")) {node = 7;
} else {node = 8;
} 
 break; 
case 6:
score += -0.00204162969501361;
done = 1;
break;
case 7:
score += 0.00766341409024598;
done = 1;
break;
case 8:
score += 0.00682805611125735;
done = 1;
break;
case 9:
score += -0.00029348457616798;
done = 1;
break;
};
/* Tree 91 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (!strcmp (X3,"d")) {node = 1;
} else if (!strcmp (X3,"c")||!strcmp (X3,"b")||!strcmp (X3,"a")) {node = 8;
} else {node = 9;
} 
 break; 
case 1:
 if (X2== MISSING) {node = 7;
} else if (X2<= 0.264961436856538) {node = 2;
} else {node = 3;
} 
 break; 
case 2:
score += -0.0211896186719973;
done = 1;
break;
case 3:
 if (X1== MISSING) {node = 6;
} else if (X1<= 0.384865847532637) {node = 4;
} else {node = 5;
} 
 break; 
case 4:
score += -0.0163832482754689;
done = 1;
break;
case 5:
score += -0.00298308975513768;
done = 1;
break;
case 6:
score += -0.000410345983472314;
done = 1;
break;
case 7:
score += -0.00644014325021792;
done = 1;
break;
case 8:
score += 0.00178436383451987;
done = 1;
break;
case 9:
score += -0.000518498149206711;
done = 1;
break;
};
/* Tree 92 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X2== MISSING) {node = 9;
} else if (X2<= 1.06644278485328) {node = 1;
} else {node = 2;
} 
 break; 
case 1:
score += -0.00428790926466382;
done = 1;
break;
case 2:
 if (!strcmp (X4,"a")||!strcmp (X4,"b")||!strcmp (X4,"c")||!strcmp (X4,"d")) {node = 3;
} else if (!strcmp (X4,"e")||!strcmp (X4,"f")) {node = 7;
} else {node = 8;
} 
 break; 
case 3:
 if (!strcmp (X5,"b")||!strcmp (X5,"c")) {node = 4;
} else if (!strcmp (X5,"a")) {node = 5;
} else {node = 6;
} 
 break; 
case 4:
score += -0.00321331268774999;
done = 1;
break;
case 5:
score += 0.0128353015709416;
done = 1;
break;
case 6:
score += 0.000723139866268689;
done = 1;
break;
case 7:
score += 0.011941813269149;
done = 1;
break;
case 8:
score += 0.00416770949787327;
done = 1;
break;
case 9:
score += -0.000712306004360809;
done = 1;
break;
};
/* Tree 93 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X1== MISSING) {node = 3;
} else if (X1<= 0.776841260842048) {node = 1;
} else {node = 2;
} 
 break; 
case 1:
score += -0.00428174000242596;
done = 1;
break;
case 2:
score += 0.0151683804292405;
done = 1;
break;
case 3:
 if (!strcmp (X4,"e")) {node = 4;
} else if (!strcmp (X4,"a")||!strcmp (X4,"b")||!strcmp (X4,"c")||!strcmp (X4,"d")||!strcmp (X4,"f")) {node = 5;
} else {node = 9;
} 
 break; 
case 4:
score += -0.0177596755585753;
done = 1;
break;
case 5:
 if (!strcmp (X3,"d")) {node = 6;
} else if (!strcmp (X3,"c")||!strcmp (X3,"b")||!strcmp (X3,"a")) {node = 7;
} else {node = 8;
} 
 break; 
case 6:
score += -0.00441846565080497;
done = 1;
break;
case 7:
score += 0.0102630475126417;
done = 1;
break;
case 8:
score += 0.00421771856298718;
done = 1;
break;
case 9:
score += 0.00423557418097601;
done = 1;
break;
};
/* Tree 94 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X1== MISSING) {node = 6;
} else if (X1<= 0.48592912114691) {node = 1;
} else {node = 5;
} 
 break; 
case 1:
 if (X2== MISSING) {node = 4;
} else if (X2<= 0.314133221516386) {node = 2;
} else {node = 3;
} 
 break; 
case 2:
score += -0.0192452640222035;
done = 1;
break;
case 3:
score += -0.0018599494773649;
done = 1;
break;
case 4:
score += -0.00507945217085353;
done = 1;
break;
case 5:
score += 0.00801417900527377;
done = 1;
break;
case 6:
 if (X6== MISSING) {node = 9;
} else if (X6<= 2.83574735827278) {node = 7;
} else {node = 8;
} 
 break; 
case 7:
score += -0.000297596621855191;
done = 1;
break;
case 8:
score += 0.0149679371074189;
done = 1;
break;
case 9:
score += 0.000867711296410005;
done = 1;
break;
};
/* Tree 95 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X2== MISSING) {node = 9;
} else if (X2<= 1.19299399410374) {node = 1;
} else {node = 5;
} 
 break; 
case 1:
 if (!strcmp (X5,"a")||!strcmp (X5,"b")) {node = 2;
} else if (!strcmp (X5,"c")) {node = 3;
} else {node = 4;
} 
 break; 
case 2:
score += -0.00538274979696866;
done = 1;
break;
case 3:
score += 0.00552499768644849;
done = 1;
break;
case 4:
score += -0.00243285582346591;
done = 1;
break;
case 5:
 if (X1== MISSING) {node = 8;
} else if (X1<= 0.656405224464834) {node = 6;
} else {node = 7;
} 
 break; 
case 6:
score += -0.000126895843443029;
done = 1;
break;
case 7:
score += 0.0203481752000132;
done = 1;
break;
case 8:
score += 0.00815056462359463;
done = 1;
break;
case 9:
score += 0.000896689144845724;
done = 1;
break;
};
/* Tree 96 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (!strcmp (X3,"d")||!strcmp (X3,"c")||!strcmp (X3,"b")) {node = 1;
} else if (!strcmp (X3,"a")) {node = 5;
} else {node = 9;
} 
 break; 
case 1:
 if (!strcmp (X4,"a")||!strcmp (X4,"c")||!strcmp (X4,"e")||!strcmp (X4,"f")) {node = 2;
} else if (!strcmp (X4,"b")||!strcmp (X4,"d")) {node = 3;
} else {node = 4;
} 
 break; 
case 2:
score += -0.00802145833876225;
done = 1;
break;
case 3:
score += -0.000891985609783903;
done = 1;
break;
case 4:
score += 0.00203125584283715;
done = 1;
break;
case 5:
 if (X6== MISSING) {node = 8;
} else if (X6<= 0.798123011947609) {node = 6;
} else {node = 7;
} 
 break; 
case 6:
score += -0.00434990415386308;
done = 1;
break;
case 7:
score += 0.00931474125991028;
done = 1;
break;
case 8:
score += 0.00436719723078544;
done = 1;
break;
case 9:
score += -0.00144763083975288;
done = 1;
break;
};
/* Tree 97 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X6== MISSING) {node = 9;
} else if (X6<= 1.51417000615038) {node = 1;
} else {node = 2;
} 
 break; 
case 1:
score += -0.00137040777479022;
done = 1;
break;
case 2:
 if (X1== MISSING) {node = 5;
} else if (X1<= 0.268921238020994) {node = 3;
} else {node = 4;
} 
 break; 
case 3:
score += -0.00624328602870371;
done = 1;
break;
case 4:
score += 0.0093888787907505;
done = 1;
break;
case 5:
 if (X2== MISSING) {node = 8;
} else if (X2<= 1.41233013477176) {node = 6;
} else {node = 7;
} 
 break; 
case 6:
score += -0.0011994488931563;
done = 1;
break;
case 7:
score += 0.0137544878206142;
done = 1;
break;
case 8:
score += 0.00368933810942252;
done = 1;
break;
case 9:
score += 0.00181516425735714;
done = 1;
break;
};
/* Tree 98 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X1== MISSING) {node = 3;
} else if (X1<= 0.813335958635435) {node = 1;
} else {node = 2;
} 
 break; 
case 1:
score += 4.40541298869194e-05;
done = 1;
break;
case 2:
score += 0.0128039020924422;
done = 1;
break;
case 3:
 if (X2== MISSING) {node = 9;
} else if (X2<= 1.39612960116938) {node = 4;
} else {node = 5;
} 
 break; 
case 4:
score += -0.00365807128981641;
done = 1;
break;
case 5:
 if (X6== MISSING) {node = 8;
} else if (X6<= 0.782664722995833) {node = 6;
} else {node = 7;
} 
 break; 
case 6:
score += -0.0125817212899805;
done = 1;
break;
case 7:
score += 0.014136684263267;
done = 1;
break;
case 8:
score += 0.00549249423133395;
done = 1;
break;
case 9:
score += -0.00114904525982357;
done = 1;
break;
};
/* Tree 99 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X2== MISSING) {node = 9;
} else if (X2<= 0.282299417536706) {node = 1;
} else {node = 5;
} 
 break; 
case 1:
 if (!strcmp (X3,"d")||!strcmp (X3,"c")||!strcmp (X3,"b")) {node = 2;
} else if (!strcmp (X3,"a")) {node = 3;
} else {node = 4;
} 
 break; 
case 2:
score += -0.0135020155478097;
done = 1;
break;
case 3:
score += 0.00323773123646341;
done = 1;
break;
case 4:
score += -0.00824095227275247;
done = 1;
break;
case 5:
 if (X2== MISSING) {node = 8;
} else if (X2<= 1.58962019952014) {node = 6;
} else {node = 7;
} 
 break; 
case 6:
score += 0.000873175802277962;
done = 1;
break;
case 7:
score += -0.0063248352425187;
done = 1;
break;
case 8:
score += -0.000733822012374315;
done = 1;
break;
case 9:
score += -0.00178482024882726;
done = 1;
break;
};
/* Tree 100 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X2== MISSING) {node = 9;
} else if (X2<= 1.19405761850066) {node = 1;
} else {node = 2;
} 
 break; 
case 1:
score += -0.00405207405967695;
done = 1;
break;
case 2:
 if (!strcmp (X4,"a")||!strcmp (X4,"c")||!strcmp (X4,"d")||!strcmp (X4,"e")) {node = 3;
} else if (!strcmp (X4,"b")||!strcmp (X4,"f")) {node = 4;
} else {node = 5;
} 
 break; 
case 3:
score += 0.00205379952253424;
done = 1;
break;
case 4:
score += 0.0164025211127927;
done = 1;
break;
case 5:
 if (X2== MISSING) {node = 8;
} else if (X2<= 1.52066186885349) {node = 6;
} else {node = 7;
} 
 break; 
case 6:
score += 0.0126410730063434;
done = 1;
break;
case 7:
score += -0.00434501444763116;
done = 1;
break;
case 8:
score += 0.00234647454938911;
done = 1;
break;
case 9:
score += -0.000644225443767744;
done = 1;
break;
};
/* Tree 101 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (!strcmp (X3,"d")||!strcmp (X3,"c")||!strcmp (X3,"b")) {node = 1;
} else if (!strcmp (X3,"a")) {node = 8;
} else {node = 9;
} 
 break; 
case 1:
 if (X6== MISSING) {node = 7;
} else if (X6<= 2.01180602924433) {node = 2;
} else {node = 3;
} 
 break; 
case 2:
score += 0.00265516449271047;
done = 1;
break;
case 3:
 if (!strcmp (X4,"a")||!strcmp (X4,"b")||!strcmp (X4,"c")||!strcmp (X4,"e")) {node = 4;
} else if (!strcmp (X4,"d")||!strcmp (X4,"f")) {node = 5;
} else {node = 6;
} 
 break; 
case 4:
score += -0.00689672354104614;
done = 1;
break;
case 5:
score += 0.00353446666521908;
done = 1;
break;
case 6:
score += -0.0131506214333414;
done = 1;
break;
case 7:
score += -0.000845055492296906;
done = 1;
break;
case 8:
score += 0.00967355650036496;
done = 1;
break;
case 9:
score += 0.00197393252173648;
done = 1;
break;
};
/* Tree 102 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (!strcmp (X3,"d")||!strcmp (X3,"c")||!strcmp (X3,"b")) {node = 1;
} else if (!strcmp (X3,"a")) {node = 8;
} else {node = 9;
} 
 break; 
case 1:
 if (X1== MISSING) {node = 4;
} else if (X1<= 0.20372823276557) {node = 2;
} else {node = 3;
} 
 break; 
case 2:
score += -0.0147325984075634;
done = 1;
break;
case 3:
score += 0.000672131885382535;
done = 1;
break;
case 4:
 if (X6== MISSING) {node = 7;
} else if (X6<= 0.785430165706202) {node = 5;
} else {node = 6;
} 
 break; 
case 5:
score += 0.00867590779573512;
done = 1;
break;
case 6:
score += -0.00418263106443911;
done = 1;
break;
case 7:
score += -0.00103943267639652;
done = 1;
break;
case 8:
score += 0.00610858448081907;
done = 1;
break;
case 9:
score += 0.000588654121142309;
done = 1;
break;
};
/* Tree 103 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X2== MISSING) {node = 9;
} else if (X2<= 0.362735397880897) {node = 1;
} else {node = 2;
} 
 break; 
case 1:
score += -0.00566357025742308;
done = 1;
break;
case 2:
 if (!strcmp (X4,"a")||!strcmp (X4,"d")||!strcmp (X4,"e")) {node = 3;
} else if (!strcmp (X4,"b")||!strcmp (X4,"c")||!strcmp (X4,"f")) {node = 4;
} else {node = 8;
} 
 break; 
case 3:
score += -0.00162330854315235;
done = 1;
break;
case 4:
 if (X2== MISSING) {node = 7;
} else if (X2<= 1.36308989441022) {node = 5;
} else {node = 6;
} 
 break; 
case 5:
score += 0.000915085144921548;
done = 1;
break;
case 6:
score += 0.0148153641076694;
done = 1;
break;
case 7:
score += 0.00607164024400544;
done = 1;
break;
case 8:
score += 0.00126658154727285;
done = 1;
break;
case 9:
score += 2.03974384550635e-05;
done = 1;
break;
};
/* Tree 104 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X1== MISSING) {node = 3;
} else if (X1<= 0.257950352621265) {node = 1;
} else {node = 2;
} 
 break; 
case 1:
score += -0.0087512416554497;
done = 1;
break;
case 2:
score += 0.00149867355651308;
done = 1;
break;
case 3:
 if (!strcmp (X5,"b")||!strcmp (X5,"c")) {node = 4;
} else if (!strcmp (X5,"a")) {node = 8;
} else {node = 9;
} 
 break; 
case 4:
 if (X2== MISSING) {node = 7;
} else if (X2<= 0.9289252567105) {node = 5;
} else {node = 6;
} 
 break; 
case 5:
score += 0.00066671010222121;
done = 1;
break;
case 6:
score += -0.011177215564965;
done = 1;
break;
case 7:
score += -0.0052552527313719;
done = 1;
break;
case 8:
score += 0.00413003655310023;
done = 1;
break;
case 9:
score += -0.00192975652821249;
done = 1;
break;
};
/* Tree 105 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X1== MISSING) {node = 6;
} else if (X1<= 0.544580107904039) {node = 1;
} else {node = 5;
} 
 break; 
case 1:
 if (!strcmp (X4,"e")||!strcmp (X4,"f")) {node = 2;
} else if (!strcmp (X4,"a")||!strcmp (X4,"b")||!strcmp (X4,"c")||!strcmp (X4,"d")) {node = 3;
} else {node = 4;
} 
 break; 
case 2:
score += -0.0140127786176164;
done = 1;
break;
case 3:
score += 0.000588461186988262;
done = 1;
break;
case 4:
score += -0.00693527963994002;
done = 1;
break;
case 5:
score += 0.00159727718510115;
done = 1;
break;
case 6:
 if (!strcmp (X4,"a")||!strcmp (X4,"b")||!strcmp (X4,"c")||!strcmp (X4,"e")) {node = 7;
} else if (!strcmp (X4,"d")||!strcmp (X4,"f")) {node = 8;
} else {node = 9;
} 
 break; 
case 7:
score += -0.00586174526873278;
done = 1;
break;
case 8:
score += 0.00490941316027686;
done = 1;
break;
case 9:
score += 0.00617324921536483;
done = 1;
break;
};
/* Tree 106 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (!strcmp (X3,"d")||!strcmp (X3,"c")) {node = 1;
} else if (!strcmp (X3,"b")||!strcmp (X3,"a")) {node = 2;
} else {node = 9;
} 
 break; 
case 1:
score += -0.00355244945364109;
done = 1;
break;
case 2:
 if (X1== MISSING) {node = 5;
} else if (X1<= 0.215367258060724) {node = 3;
} else {node = 4;
} 
 break; 
case 3:
score += -0.00978730545449386;
done = 1;
break;
case 4:
score += 0.00742421748282428;
done = 1;
break;
case 5:
 if (!strcmp (X4,"a")||!strcmp (X4,"b")||!strcmp (X4,"c")||!strcmp (X4,"e")) {node = 6;
} else if (!strcmp (X4,"d")||!strcmp (X4,"f")) {node = 7;
} else {node = 8;
} 
 break; 
case 6:
score += 0.00777700123911077;
done = 1;
break;
case 7:
score += 0.0239808557913973;
done = 1;
break;
case 8:
score += 0.00466493422906632;
done = 1;
break;
case 9:
score += 0.00146380558473613;
done = 1;
break;
};
/* Tree 107 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X6== MISSING) {node = 9;
} else if (X6<= 2.91521186381578) {node = 1;
} else {node = 8;
} 
 break; 
case 1:
 if (X6== MISSING) {node = 7;
} else if (X6<= 2.73084581235889) {node = 2;
} else {node = 6;
} 
 break; 
case 2:
 if (X1== MISSING) {node = 5;
} else if (X1<= 0.184626739472151) {node = 3;
} else {node = 4;
} 
 break; 
case 3:
score += -0.00859689904316368;
done = 1;
break;
case 4:
score += 0.00168665340431502;
done = 1;
break;
case 5:
score += -0.000268420823439682;
done = 1;
break;
case 6:
score += -0.0105061608507205;
done = 1;
break;
case 7:
score += -0.00124300131715305;
done = 1;
break;
case 8:
score += 0.0136973617226923;
done = 1;
break;
case 9:
score += -0.000466102439081086;
done = 1;
break;
};
/* Tree 108 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (!strcmp (X3,"d")) {node = 1;
} else if (!strcmp (X3,"c")||!strcmp (X3,"b")||!strcmp (X3,"a")) {node = 2;
} else {node = 9;
} 
 break; 
case 1:
score += -0.00858951476852948;
done = 1;
break;
case 2:
 if (!strcmp (X5,"a")||!strcmp (X5,"c")) {node = 3;
} else if (!strcmp (X5,"b")) {node = 7;
} else {node = 8;
} 
 break; 
case 3:
 if (X6== MISSING) {node = 6;
} else if (X6<= 2.81023840152193) {node = 4;
} else {node = 5;
} 
 break; 
case 4:
score += -0.00294351234760369;
done = 1;
break;
case 5:
score += 0.0172741702785346;
done = 1;
break;
case 6:
score += -0.00146776909022134;
done = 1;
break;
case 7:
score += 0.00739983086483119;
done = 1;
break;
case 8:
score += 0.00132552489562021;
done = 1;
break;
case 9:
score += -0.000657483037209727;
done = 1;
break;
};
/* Tree 109 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X2== MISSING) {node = 9;
} else if (X2<= 0.0626787359360605) {node = 1;
} else {node = 2;
} 
 break; 
case 1:
score += -0.0129014316211576;
done = 1;
break;
case 2:
 if (X1== MISSING) {node = 8;
} else if (X1<= 0.29426587454509) {node = 3;
} else {node = 4;
} 
 break; 
case 3:
score += 0.00790799075053047;
done = 1;
break;
case 4:
 if (!strcmp (X4,"a")||!strcmp (X4,"b")) {node = 5;
} else if (!strcmp (X4,"c")||!strcmp (X4,"d")||!strcmp (X4,"e")||!strcmp (X4,"f")) {node = 6;
} else {node = 7;
} 
 break; 
case 5:
score += -0.00932162134892372;
done = 1;
break;
case 6:
score += 0.00339898254770308;
done = 1;
break;
case 7:
score += -0.00371421985865864;
done = 1;
break;
case 8:
score += -0.00180915574397363;
done = 1;
break;
case 9:
score += -0.00105583767268446;
done = 1;
break;
};
/* Tree 110 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X1== MISSING) {node = 9;
} else if (X1<= 0.813335958635435) {node = 1;
} else {node = 8;
} 
 break; 
case 1:
 if (!strcmp (X4,"b")||!strcmp (X4,"d")||!strcmp (X4,"e")||!strcmp (X4,"f")) {node = 2;
} else if (!strcmp (X4,"a")||!strcmp (X4,"c")) {node = 3;
} else {node = 4;
} 
 break; 
case 2:
score += -0.00309847301694815;
done = 1;
break;
case 3:
score += 0.0120922816005045;
done = 1;
break;
case 4:
 if (X6== MISSING) {node = 7;
} else if (X6<= 1.02466054516844) {node = 5;
} else {node = 6;
} 
 break; 
case 5:
score += 0.0170190973249907;
done = 1;
break;
case 6:
score += -0.00851711159402898;
done = 1;
break;
case 7:
score += -0.000279624845958115;
done = 1;
break;
case 8:
score += 0.0113047215662641;
done = 1;
break;
case 9:
score += -0.000991379948705308;
done = 1;
break;
};
/* Tree 111 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X1== MISSING) {node = 6;
} else if (X1<= 0.527091237250715) {node = 1;
} else {node = 5;
} 
 break; 
case 1:
 if (!strcmp (X4,"e")||!strcmp (X4,"f")) {node = 2;
} else if (!strcmp (X4,"a")||!strcmp (X4,"b")||!strcmp (X4,"c")||!strcmp (X4,"d")) {node = 3;
} else {node = 4;
} 
 break; 
case 2:
score += -0.0183811954438116;
done = 1;
break;
case 3:
score += -0.00257296551423082;
done = 1;
break;
case 4:
score += 0.00294233511577142;
done = 1;
break;
case 5:
score += 0.00482251185346448;
done = 1;
break;
case 6:
 if (X2== MISSING) {node = 9;
} else if (X2<= 1.43401876278222) {node = 7;
} else {node = 8;
} 
 break; 
case 7:
score += -0.00127390562705086;
done = 1;
break;
case 8:
score += 0.00760657990668278;
done = 1;
break;
case 9:
score += 0.00121532137861691;
done = 1;
break;
};
/* Tree 112 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X2== MISSING) {node = 9;
} else if (X2<= 0.0760738914832473) {node = 1;
} else {node = 2;
} 
 break; 
case 1:
score += -0.013315331583576;
done = 1;
break;
case 2:
 if (!strcmp (X4,"a")||!strcmp (X4,"f")) {node = 3;
} else if (!strcmp (X4,"b")||!strcmp (X4,"c")||!strcmp (X4,"d")||!strcmp (X4,"e")) {node = 4;
} else {node = 5;
} 
 break; 
case 3:
score += -0.0065176753223314;
done = 1;
break;
case 4:
score += 0.000389350640649678;
done = 1;
break;
case 5:
 if (!strcmp (X5,"a")) {node = 6;
} else if (!strcmp (X5,"b")||!strcmp (X5,"c")) {node = 7;
} else {node = 8;
} 
 break; 
case 6:
score += -0.00800414626420439;
done = 1;
break;
case 7:
score += 0.00764496463813971;
done = 1;
break;
case 8:
score += 0.00219148659641374;
done = 1;
break;
case 9:
score += -0.00125568728152259;
done = 1;
break;
};
/* Tree 113 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X6== MISSING) {node = 9;
} else if (X6<= 2.38947571918834) {node = 1;
} else {node = 5;
} 
 break; 
case 1:
 if (X2== MISSING) {node = 4;
} else if (X2<= 0.937332714674994) {node = 2;
} else {node = 3;
} 
 break; 
case 2:
score += -1.44916639656487e-05;
done = 1;
break;
case 3:
score += 0.00523365701207222;
done = 1;
break;
case 4:
score += 0.00276702713433442;
done = 1;
break;
case 5:
 if (!strcmp (X4,"a")||!strcmp (X4,"d")||!strcmp (X4,"e")) {node = 6;
} else if (!strcmp (X4,"b")||!strcmp (X4,"c")||!strcmp (X4,"f")) {node = 7;
} else {node = 8;
} 
 break; 
case 6:
score += -0.0155442327771958;
done = 1;
break;
case 7:
score += -0.00616208429923657;
done = 1;
break;
case 8:
score += 0.00193596245339955;
done = 1;
break;
case 9:
score += 0.00106611967915356;
done = 1;
break;
};
/* Tree 114 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X6== MISSING) {node = 9;
} else if (X6<= 1.13947955961339) {node = 1;
} else {node = 5;
} 
 break; 
case 1:
 if (X2== MISSING) {node = 4;
} else if (X2<= 0.915587591240183) {node = 2;
} else {node = 3;
} 
 break; 
case 2:
score += -0.000537332745573024;
done = 1;
break;
case 3:
score += 0.0133528721162821;
done = 1;
break;
case 4:
score += 0.00604977471468819;
done = 1;
break;
case 5:
 if (X1== MISSING) {node = 8;
} else if (X1<= 0.763278515776619) {node = 6;
} else {node = 7;
} 
 break; 
case 6:
score += -0.00309879125589423;
done = 1;
break;
case 7:
score += 0.0066594587446752;
done = 1;
break;
case 8:
score += -0.00887309291635363;
done = 1;
break;
case 9:
score += -0.000330323330828612;
done = 1;
break;
};
/* Tree 115 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X6== MISSING) {node = 9;
} else if (X6<= 0.401155009749345) {node = 1;
} else {node = 5;
} 
 break; 
case 1:
 if (X6== MISSING) {node = 4;
} else if (X6<= 0.19060020998586) {node = 2;
} else {node = 3;
} 
 break; 
case 2:
score += 0.00143423216753921;
done = 1;
break;
case 3:
score += 0.020331829275076;
done = 1;
break;
case 4:
score += 0.00887874011899312;
done = 1;
break;
case 5:
 if (X1== MISSING) {node = 8;
} else if (X1<= 0.685830814880319) {node = 6;
} else {node = 7;
} 
 break; 
case 6:
score += -1.87743008920906e-05;
done = 1;
break;
case 7:
score += -0.00805484443751143;
done = 1;
break;
case 8:
score += 0.00138125437377429;
done = 1;
break;
case 9:
score += 0.000905271052276592;
done = 1;
break;
};
/* Tree 116 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (!strcmp (X5,"c")) {node = 1;
} else if (!strcmp (X5,"a")||!strcmp (X5,"b")) {node = 2;
} else {node = 9;
} 
 break; 
case 1:
score += -0.00366141509711627;
done = 1;
break;
case 2:
 if (!strcmp (X4,"a")||!strcmp (X4,"e")) {node = 3;
} else if (!strcmp (X4,"b")||!strcmp (X4,"c")||!strcmp (X4,"d")||!strcmp (X4,"f")) {node = 4;
} else {node = 8;
} 
 break; 
case 3:
score += -0.00604117051324537;
done = 1;
break;
case 4:
 if (X2== MISSING) {node = 7;
} else if (X2<= 0.429373677819967) {node = 5;
} else {node = 6;
} 
 break; 
case 5:
score += -0.00619378919448293;
done = 1;
break;
case 6:
score += 0.00533457166373413;
done = 1;
break;
case 7:
score += 0.00198330397239196;
done = 1;
break;
case 8:
score += 0.00417099565293597;
done = 1;
break;
case 9:
score += -0.000247969801122568;
done = 1;
break;
};
/* Tree 117 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (!strcmp (X3,"d")||!strcmp (X3,"c")||!strcmp (X3,"b")) {node = 1;
} else if (!strcmp (X3,"a")) {node = 2;
} else {node = 9;
} 
 break; 
case 1:
score += -0.000653973867503102;
done = 1;
break;
case 2:
 if (X6== MISSING) {node = 8;
} else if (X6<= 1.33837653079536) {node = 3;
} else {node = 4;
} 
 break; 
case 3:
score += 4.63067510380135e-05;
done = 1;
break;
case 4:
 if (!strcmp (X4,"a")||!strcmp (X4,"b")||!strcmp (X4,"c")||!strcmp (X4,"d")) {node = 5;
} else if (!strcmp (X4,"e")||!strcmp (X4,"f")) {node = 6;
} else {node = 7;
} 
 break; 
case 5:
score += 0.00287194498192893;
done = 1;
break;
case 6:
score += 0.0151753452418031;
done = 1;
break;
case 7:
score += 0.00902364511186604;
done = 1;
break;
case 8:
score += 0.00447175523877014;
done = 1;
break;
case 9:
score += 0.000801733198678498;
done = 1;
break;
};
/* Tree 118 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X6== MISSING) {node = 9;
} else if (X6<= 0.320492974366061) {node = 1;
} else {node = 5;
} 
 break; 
case 1:
 if (!strcmp (X5,"b")) {node = 2;
} else if (!strcmp (X5,"a")||!strcmp (X5,"c")) {node = 3;
} else {node = 4;
} 
 break; 
case 2:
score += -0.00405746542884962;
done = 1;
break;
case 3:
score += 0.0125969920411511;
done = 1;
break;
case 4:
score += 0.00635157048990084;
done = 1;
break;
case 5:
 if (X6== MISSING) {node = 8;
} else if (X6<= 2.83673553506378) {node = 6;
} else {node = 7;
} 
 break; 
case 6:
score += -0.00433368841021514;
done = 1;
break;
case 7:
score += 0.00779814334366408;
done = 1;
break;
case 8:
score += -0.00327632692707888;
done = 1;
break;
case 9:
score += -0.00204395605770548;
done = 1;
break;
};
/* Tree 119 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X1== MISSING) {node = 9;
} else if (X1<= 0.204028634354472) {node = 1;
} else {node = 2;
} 
 break; 
case 1:
score += -0.00868648572401072;
done = 1;
break;
case 2:
 if (X6== MISSING) {node = 8;
} else if (X6<= 1.64949986140709) {node = 3;
} else {node = 4;
} 
 break; 
case 3:
score += -0.00585029350756753;
done = 1;
break;
case 4:
 if (X2== MISSING) {node = 7;
} else if (X2<= 0.9892244390212) {node = 5;
} else {node = 6;
} 
 break; 
case 5:
score += 0.00769809442260662;
done = 1;
break;
case 6:
score += -0.00377219133754621;
done = 1;
break;
case 7:
score += 0.0022757775178071;
done = 1;
break;
case 8:
score += -0.00114572607182432;
done = 1;
break;
case 9:
score += 0.00287663966289151;
done = 1;
break;
};
/* Tree 120 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X2== MISSING) {node = 9;
} else if (X2<= 0.0505512449890375) {node = 1;
} else {node = 2;
} 
 break; 
case 1:
score += -0.0162301284205091;
done = 1;
break;
case 2:
 if (!strcmp (X4,"d")||!strcmp (X4,"f")) {node = 3;
} else if (!strcmp (X4,"a")||!strcmp (X4,"b")||!strcmp (X4,"c")||!strcmp (X4,"e")) {node = 4;
} else {node = 5;
} 
 break; 
case 3:
score += -0.00448998218311239;
done = 1;
break;
case 4:
score += 0.00237396981790013;
done = 1;
break;
case 5:
 if (X6== MISSING) {node = 8;
} else if (X6<= 2.7048503193073) {node = 6;
} else {node = 7;
} 
 break; 
case 6:
score += -0.000389635870388679;
done = 1;
break;
case 7:
score += 0.0152594554504168;
done = 1;
break;
case 8:
score += 0.00233194522888183;
done = 1;
break;
case 9:
score += 0.000178951339697081;
done = 1;
break;
};
/* Tree 121 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X1== MISSING) {node = 9;
} else if (X1<= 0.267341185477562) {node = 1;
} else {node = 2;
} 
 break; 
case 1:
score += -0.0111974551266349;
done = 1;
break;
case 2:
 if (!strcmp (X5,"c")) {node = 3;
} else if (!strcmp (X5,"a")||!strcmp (X5,"b")) {node = 7;
} else {node = 8;
} 
 break; 
case 3:
 if (!strcmp (X4,"b")||!strcmp (X4,"d")) {node = 4;
} else if (!strcmp (X4,"a")||!strcmp (X4,"c")||!strcmp (X4,"e")||!strcmp (X4,"f")) {node = 5;
} else {node = 6;
} 
 break; 
case 4:
score += -0.00597668316980961;
done = 1;
break;
case 5:
score += 0.00271920208348106;
done = 1;
break;
case 6:
score += -0.00100760588221494;
done = 1;
break;
case 7:
score += 0.00619680440312846;
done = 1;
break;
case 8:
score += 0.00342010460565236;
done = 1;
break;
case 9:
score += 0.00207610315267442;
done = 1;
break;
};
/* Tree 122 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (!strcmp (X3,"d")||!strcmp (X3,"c")||!strcmp (X3,"b")) {node = 1;
} else if (!strcmp (X3,"a")) {node = 5;
} else {node = 9;
} 
 break; 
case 1:
 if (X2== MISSING) {node = 4;
} else if (X2<= 0.174929158296436) {node = 2;
} else {node = 3;
} 
 break; 
case 2:
score += -0.0138265941392692;
done = 1;
break;
case 3:
score += -0.00202555031740911;
done = 1;
break;
case 4:
score += -0.00310414034413826;
done = 1;
break;
case 5:
 if (!strcmp (X4,"a")||!strcmp (X4,"d")||!strcmp (X4,"e")) {node = 6;
} else if (!strcmp (X4,"b")||!strcmp (X4,"c")||!strcmp (X4,"f")) {node = 7;
} else {node = 8;
} 
 break; 
case 6:
score += 0.00883156571636004;
done = 1;
break;
case 7:
score += 0.0150565361517812;
done = 1;
break;
case 8:
score += -0.00468285680793595;
done = 1;
break;
case 9:
score += -0.00069007137647168;
done = 1;
break;
};
/* Tree 123 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (!strcmp (X4,"a")) {node = 1;
} else if (!strcmp (X4,"b")||!strcmp (X4,"c")||!strcmp (X4,"d")||!strcmp (X4,"e")||!strcmp (X4,"f")) {node = 2;
} else {node = 9;
} 
 break; 
case 1:
score += -0.00488031276995129;
done = 1;
break;
case 2:
 if (X6== MISSING) {node = 8;
} else if (X6<= 2.1150472186273) {node = 3;
} else {node = 7;
} 
 break; 
case 3:
 if (!strcmp (X5,"b")||!strcmp (X5,"c")) {node = 4;
} else if (!strcmp (X5,"a")) {node = 5;
} else {node = 6;
} 
 break; 
case 4:
score += -0.000744293702778289;
done = 1;
break;
case 5:
score += 0.00905704991681488;
done = 1;
break;
case 6:
score += 0.00325237068579368;
done = 1;
break;
case 7:
score += -0.00702432513507669;
done = 1;
break;
case 8:
score += -1.43935486551774e-05;
done = 1;
break;
case 9:
score += 0.00425452057987478;
done = 1;
break;
};
/* Tree 124 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (!strcmp (X5,"c")) {node = 1;
} else if (!strcmp (X5,"a")||!strcmp (X5,"b")) {node = 8;
} else {node = 9;
} 
 break; 
case 1:
 if (X2== MISSING) {node = 7;
} else if (X2<= 0.472094442462549) {node = 2;
} else {node = 3;
} 
 break; 
case 2:
score += 0.013303027978188;
done = 1;
break;
case 3:
 if (X2== MISSING) {node = 6;
} else if (X2<= 0.995302662951872) {node = 4;
} else {node = 5;
} 
 break; 
case 4:
score += -0.0179293516240512;
done = 1;
break;
case 5:
score += -0.00407290233640597;
done = 1;
break;
case 6:
score += -0.00869171876562105;
done = 1;
break;
case 7:
score += -0.00435472644994039;
done = 1;
break;
case 8:
score += 0.00420433802229264;
done = 1;
break;
case 9:
score += 0.00177356371217846;
done = 1;
break;
};
/* Tree 125 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X2== MISSING) {node = 9;
} else if (X2<= 0.104555072495714) {node = 1;
} else {node = 2;
} 
 break; 
case 1:
score += -0.0110391080049814;
done = 1;
break;
case 2:
 if (X2== MISSING) {node = 8;
} else if (X2<= 1.81229830253869) {node = 3;
} else {node = 7;
} 
 break; 
case 3:
 if (!strcmp (X4,"a")||!strcmp (X4,"b")) {node = 4;
} else if (!strcmp (X4,"c")||!strcmp (X4,"d")||!strcmp (X4,"e")||!strcmp (X4,"f")) {node = 5;
} else {node = 6;
} 
 break; 
case 4:
score += -0.0020379611007229;
done = 1;
break;
case 5:
score += 0.00424227342844669;
done = 1;
break;
case 6:
score += -0.00121497133597679;
done = 1;
break;
case 7:
score += -0.00687571392951652;
done = 1;
break;
case 8:
score += 0.000421704969267613;
done = 1;
break;
case 9:
score += -8.25708015993445e-05;
done = 1;
break;
};
/* Tree 126 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X6== MISSING) {node = 9;
} else if (X6<= 2.19404361653142) {node = 1;
} else {node = 5;
} 
 break; 
case 1:
 if (X6== MISSING) {node = 4;
} else if (X6<= 1.51417000615038) {node = 2;
} else {node = 3;
} 
 break; 
case 2:
score += -0.000289446901241392;
done = 1;
break;
case 3:
score += 0.00744873119396322;
done = 1;
break;
case 4:
score += 0.00251620831456379;
done = 1;
break;
case 5:
 if (X1== MISSING) {node = 8;
} else if (X1<= 0.41990057437215) {node = 6;
} else {node = 7;
} 
 break; 
case 6:
score += 0.0116552023785556;
done = 1;
break;
case 7:
score += -0.00330587038955203;
done = 1;
break;
case 8:
score += -0.00880661234779754;
done = 1;
break;
case 9:
score += 0.000438761577134178;
done = 1;
break;
};
/* Tree 127 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (!strcmp (X4,"b")||!strcmp (X4,"c")) {node = 1;
} else if (!strcmp (X4,"a")||!strcmp (X4,"d")||!strcmp (X4,"e")||!strcmp (X4,"f")) {node = 2;
} else {node = 6;
} 
 break; 
case 1:
score += -0.00657192352504503;
done = 1;
break;
case 2:
 if (X2== MISSING) {node = 5;
} else if (X2<= 0.239646398229524) {node = 3;
} else {node = 4;
} 
 break; 
case 3:
score += -0.0122363736479256;
done = 1;
break;
case 4:
score += 0.00147627945337334;
done = 1;
break;
case 5:
score += 0.000323955663348225;
done = 1;
break;
case 6:
 if (X6== MISSING) {node = 9;
} else if (X6<= 2.76300507062115) {node = 7;
} else {node = 8;
} 
 break; 
case 7:
score += 0.000951844737652337;
done = 1;
break;
case 8:
score += 0.0225978344158487;
done = 1;
break;
case 9:
score += 0.00359159957645677;
done = 1;
break;
};
/* Tree 128 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X1== MISSING) {node = 3;
} else if (X1<= 0.518572649569251) {node = 1;
} else {node = 2;
} 
 break; 
case 1:
score += -0.00608658167630848;
done = 1;
break;
case 2:
score += 0.00270502555889581;
done = 1;
break;
case 3:
 if (X6== MISSING) {node = 9;
} else if (X6<= 2.73257376893889) {node = 4;
} else {node = 8;
} 
 break; 
case 4:
 if (X6== MISSING) {node = 7;
} else if (X6<= 0.371673060581088) {node = 5;
} else {node = 6;
} 
 break; 
case 5:
score += 0.00885641787035312;
done = 1;
break;
case 6:
score += -0.00393973594527279;
done = 1;
break;
case 7:
score += -0.00142425271656;
done = 1;
break;
case 8:
score += 0.0160403578919284;
done = 1;
break;
case 9:
score += 0.000200362223764499;
done = 1;
break;
};
/* Tree 129 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X1== MISSING) {node = 9;
} else if (X1<= 0.336431004106998) {node = 1;
} else {node = 5;
} 
 break; 
case 1:
 if (!strcmp (X4,"c")||!strcmp (X4,"d")||!strcmp (X4,"f")) {node = 2;
} else if (!strcmp (X4,"a")||!strcmp (X4,"b")||!strcmp (X4,"e")) {node = 3;
} else {node = 4;
} 
 break; 
case 2:
score += -0.0175304414330356;
done = 1;
break;
case 3:
score += 0.00272098198579568;
done = 1;
break;
case 4:
score += -0.00776639335673588;
done = 1;
break;
case 5:
 if (!strcmp (X4,"a")||!strcmp (X4,"b")) {node = 6;
} else if (!strcmp (X4,"c")||!strcmp (X4,"d")||!strcmp (X4,"e")||!strcmp (X4,"f")) {node = 7;
} else {node = 8;
} 
 break; 
case 6:
score += -0.00341898503311519;
done = 1;
break;
case 7:
score += 0.0101031984298581;
done = 1;
break;
case 8:
score += 0.00152981354936741;
done = 1;
break;
case 9:
score += -0.00238048681088672;
done = 1;
break;
};
/* Tree 130 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X1== MISSING) {node = 9;
} else if (X1<= 0.665799092268571) {node = 1;
} else {node = 8;
} 
 break; 
case 1:
 if (X2== MISSING) {node = 7;
} else if (X2<= 0.224720369791612) {node = 2;
} else {node = 3;
} 
 break; 
case 2:
score += -0.0195875625461917;
done = 1;
break;
case 3:
 if (X2== MISSING) {node = 6;
} else if (X2<= 0.464504677569494) {node = 4;
} else {node = 5;
} 
 break; 
case 4:
score += 0.0132583909011569;
done = 1;
break;
case 5:
score += -0.000976189873359203;
done = 1;
break;
case 6:
score += 0.00130134305056338;
done = 1;
break;
case 7:
score += -0.00115617525493722;
done = 1;
break;
case 8:
score += -0.0066622572132697;
done = 1;
break;
case 9:
score += 0.000982160618653583;
done = 1;
break;
};
/* Tree 131 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X2== MISSING) {node = 9;
} else if (X2<= 0.108065020525828) {node = 1;
} else {node = 2;
} 
 break; 
case 1:
score += -0.0189228473314597;
done = 1;
break;
case 2:
 if (X1== MISSING) {node = 8;
} else if (X1<= 0.813335958635435) {node = 3;
} else {node = 7;
} 
 break; 
case 3:
 if (!strcmp (X4,"b")||!strcmp (X4,"d")||!strcmp (X4,"f")) {node = 4;
} else if (!strcmp (X4,"a")||!strcmp (X4,"c")||!strcmp (X4,"e")) {node = 5;
} else {node = 6;
} 
 break; 
case 4:
score += -0.00923492595272743;
done = 1;
break;
case 5:
score += 0.00408866382725841;
done = 1;
break;
case 6:
score += 0.00149194835320323;
done = 1;
break;
case 7:
score += 0.0139653954556196;
done = 1;
break;
case 8:
score += 0.00388095647918618;
done = 1;
break;
case 9:
score += 0.00164385804680726;
done = 1;
break;
};
/* Tree 132 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X2== MISSING) {node = 9;
} else if (X2<= 0.994222777895629) {node = 1;
} else {node = 2;
} 
 break; 
case 1:
score += 0.00585852867415006;
done = 1;
break;
case 2:
 if (X1== MISSING) {node = 5;
} else if (X1<= 0.259417823515832) {node = 3;
} else {node = 4;
} 
 break; 
case 3:
score += -0.00884625225459823;
done = 1;
break;
case 4:
score += 0.00405501361634454;
done = 1;
break;
case 5:
 if (!strcmp (X3,"d")||!strcmp (X3,"c")) {node = 6;
} else if (!strcmp (X3,"b")||!strcmp (X3,"a")) {node = 7;
} else {node = 8;
} 
 break; 
case 6:
score += -0.0100665341137597;
done = 1;
break;
case 7:
score += 0.00390204106990481;
done = 1;
break;
case 8:
score += -0.00477540715025042;
done = 1;
break;
case 9:
score += 0.00186699887293732;
done = 1;
break;
};
/* Tree 133 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X6== MISSING) {node = 9;
} else if (X6<= 2.93585605162662) {node = 1;
} else {node = 8;
} 
 break; 
case 1:
 if (!strcmp (X3,"d")||!strcmp (X3,"c")||!strcmp (X3,"b")) {node = 2;
} else if (!strcmp (X3,"a")) {node = 3;
} else {node = 7;
} 
 break; 
case 2:
score += -0.00168029624128646;
done = 1;
break;
case 3:
 if (X6== MISSING) {node = 6;
} else if (X6<= 0.60992340487428) {node = 4;
} else {node = 5;
} 
 break; 
case 4:
score += -0.00599835551107735;
done = 1;
break;
case 5:
score += 0.00659466167688749;
done = 1;
break;
case 6:
score += 0.00339941850979193;
done = 1;
break;
case 7:
score += -0.000262209206610413;
done = 1;
break;
case 8:
score += -0.013415132847459;
done = 1;
break;
case 9:
score += -0.000788326152244356;
done = 1;
break;
};
/* Tree 134 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X1== MISSING) {node = 9;
} else if (X1<= 0.749341477174312) {node = 1;
} else {node = 5;
} 
 break; 
case 1:
 if (X6== MISSING) {node = 4;
} else if (X6<= 0.449579502688721) {node = 2;
} else {node = 3;
} 
 break; 
case 2:
score += -0.0168332069127558;
done = 1;
break;
case 3:
score += -0.000880276078289526;
done = 1;
break;
case 4:
score += -0.0028300787358354;
done = 1;
break;
case 5:
 if (!strcmp (X4,"b")||!strcmp (X4,"c")||!strcmp (X4,"d")) {node = 6;
} else if (!strcmp (X4,"a")||!strcmp (X4,"e")||!strcmp (X4,"f")) {node = 7;
} else {node = 8;
} 
 break; 
case 6:
score += 0.00257754563690413;
done = 1;
break;
case 7:
score += 0.0129106503418139;
done = 1;
break;
case 8:
score += 0.00707019985643013;
done = 1;
break;
case 9:
score += 0.0005279208039831;
done = 1;
break;
};
/* Tree 135 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (!strcmp (X4,"a")||!strcmp (X4,"b")||!strcmp (X4,"c")||!strcmp (X4,"e")||!strcmp (X4,"f")) {node = 1;
} else if (!strcmp (X4,"d")) {node = 2;
} else {node = 6;
} 
 break; 
case 1:
score += -0.00237067410478769;
done = 1;
break;
case 2:
 if (X6== MISSING) {node = 5;
} else if (X6<= 2.00860646017827) {node = 3;
} else {node = 4;
} 
 break; 
case 3:
score += 0.0100686032800854;
done = 1;
break;
case 4:
score += -0.00280772904951672;
done = 1;
break;
case 5:
score += 0.00443520788588449;
done = 1;
break;
case 6:
 if (X6== MISSING) {node = 9;
} else if (X6<= 2.83574735827278) {node = 7;
} else {node = 8;
} 
 break; 
case 7:
score += 0.00109570704713417;
done = 1;
break;
case 8:
score += 0.0151894380641974;
done = 1;
break;
case 9:
score += 0.00310909719242891;
done = 1;
break;
};
/* Tree 136 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (!strcmp (X3,"d")||!strcmp (X3,"c")||!strcmp (X3,"b")) {node = 1;
} else if (!strcmp (X3,"a")) {node = 5;
} else {node = 9;
} 
 break; 
case 1:
 if (X2== MISSING) {node = 4;
} else if (X2<= 0.141617242479697) {node = 2;
} else {node = 3;
} 
 break; 
case 2:
score += -0.0120531137948892;
done = 1;
break;
case 3:
score += -0.000340690653329896;
done = 1;
break;
case 4:
score += -0.00125674609456917;
done = 1;
break;
case 5:
 if (X6== MISSING) {node = 8;
} else if (X6<= 2.14916884177364) {node = 6;
} else {node = 7;
} 
 break; 
case 6:
score += 0.00168723575072104;
done = 1;
break;
case 7:
score += 0.0203218636478993;
done = 1;
break;
case 8:
score += 0.00562412896843476;
done = 1;
break;
case 9:
score += 0.000697422423323944;
done = 1;
break;
};
/* Tree 137 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (!strcmp (X3,"d")) {node = 1;
} else if (!strcmp (X3,"c")||!strcmp (X3,"b")||!strcmp (X3,"a")) {node = 8;
} else {node = 9;
} 
 break; 
case 1:
 if (X6== MISSING) {node = 7;
} else if (X6<= 1.48750657006167) {node = 2;
} else {node = 6;
} 
 break; 
case 2:
 if (X6== MISSING) {node = 5;
} else if (X6<= 0.547140395035967) {node = 3;
} else {node = 4;
} 
 break; 
case 3:
score += 0.00133231232456244;
done = 1;
break;
case 4:
score += -0.0231319578240776;
done = 1;
break;
case 5:
score += -0.0117735466836376;
done = 1;
break;
case 6:
score += -0.000449851020046436;
done = 1;
break;
case 7:
score += -0.00591646271971112;
done = 1;
break;
case 8:
score += 0.000435825234350895;
done = 1;
break;
case 9:
score += -0.00103790557099149;
done = 1;
break;
};
/* Tree 138 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (!strcmp (X3,"d")||!strcmp (X3,"c")||!strcmp (X3,"b")) {node = 1;
} else if (!strcmp (X3,"a")) {node = 8;
} else {node = 9;
} 
 break; 
case 1:
 if (X1== MISSING) {node = 4;
} else if (X1<= 0.689603396691382) {node = 2;
} else {node = 3;
} 
 break; 
case 2:
score += -0.000345857609420558;
done = 1;
break;
case 3:
score += -0.0108735549108492;
done = 1;
break;
case 4:
 if (X2== MISSING) {node = 7;
} else if (X2<= 1.56661393656395) {node = 5;
} else {node = 6;
} 
 break; 
case 5:
score += -0.00126167339380375;
done = 1;
break;
case 6:
score += -0.0148906649402211;
done = 1;
break;
case 7:
score += -0.0036817746964386;
done = 1;
break;
case 8:
score += 0.00410332095327007;
done = 1;
break;
case 9:
score += -0.00193355751528844;
done = 1;
break;
};
/* Tree 139 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (!strcmp (X4,"b")||!strcmp (X4,"e")||!strcmp (X4,"f")) {node = 1;
} else if (!strcmp (X4,"a")||!strcmp (X4,"c")||!strcmp (X4,"d")) {node = 2;
} else {node = 3;
} 
 break; 
case 1:
score += -0.00450758764012392;
done = 1;
break;
case 2:
score += 0.00234922321435209;
done = 1;
break;
case 3:
 if (X2== MISSING) {node = 9;
} else if (X2<= 1.00038215587847) {node = 4;
} else {node = 5;
} 
 break; 
case 4:
score += -0.00770788043773484;
done = 1;
break;
case 5:
 if (X2== MISSING) {node = 8;
} else if (X2<= 1.28226651367731) {node = 6;
} else {node = 7;
} 
 break; 
case 6:
score += 0.0136968857010819;
done = 1;
break;
case 7:
score += -0.00268786990823361;
done = 1;
break;
case 8:
score += 0.00151334947877035;
done = 1;
break;
case 9:
score += -0.00271304756629453;
done = 1;
break;
};
/* Tree 140 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X1== MISSING) {node = 3;
} else if (X1<= 0.759425182128325) {node = 1;
} else {node = 2;
} 
 break; 
case 1:
score += 0.000195721371739407;
done = 1;
break;
case 2:
score += 0.0129654484724797;
done = 1;
break;
case 3:
 if (X6== MISSING) {node = 9;
} else if (X6<= 2.73044464748818) {node = 4;
} else {node = 8;
} 
 break; 
case 4:
 if (X2== MISSING) {node = 7;
} else if (X2<= 1.74049407732673) {node = 5;
} else {node = 6;
} 
 break; 
case 5:
score += 0.00200148756403493;
done = 1;
break;
case 6:
score += -0.0144313949047788;
done = 1;
break;
case 7:
score += 0.000572541262398951;
done = 1;
break;
case 8:
score += -0.0139340096128565;
done = 1;
break;
case 9:
score += -0.00110129153089976;
done = 1;
break;
};
/* Tree 141 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X6== MISSING) {node = 9;
} else if (X6<= 2.83673553506378) {node = 1;
} else {node = 8;
} 
 break; 
case 1:
 if (X2== MISSING) {node = 7;
} else if (X2<= 1.43013162002899) {node = 2;
} else {node = 3;
} 
 break; 
case 2:
score += -0.00169106433874703;
done = 1;
break;
case 3:
 if (X6== MISSING) {node = 6;
} else if (X6<= 1.47620597679634) {node = 4;
} else {node = 5;
} 
 break; 
case 4:
score += -0.00228974257867657;
done = 1;
break;
case 5:
score += 0.00894077385497765;
done = 1;
break;
case 6:
score += 0.00340243698358653;
done = 1;
break;
case 7:
score += -0.000108827757766819;
done = 1;
break;
case 8:
score += 0.0122930443697137;
done = 1;
break;
case 9:
score += 0.000635284569882014;
done = 1;
break;
};
/* Tree 142 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X2== MISSING) {node = 9;
} else if (X2<= 0.0626787359360605) {node = 1;
} else {node = 2;
} 
 break; 
case 1:
score += -0.0156483235885515;
done = 1;
break;
case 2:
 if (!strcmp (X5,"a")||!strcmp (X5,"c")) {node = 3;
} else if (!strcmp (X5,"b")) {node = 4;
} else {node = 8;
} 
 break; 
case 3:
score += -0.00152601400947925;
done = 1;
break;
case 4:
 if (!strcmp (X3,"d")) {node = 5;
} else if (!strcmp (X3,"c")||!strcmp (X3,"b")||!strcmp (X3,"a")) {node = 6;
} else {node = 7;
} 
 break; 
case 5:
score += -0.00389946000969262;
done = 1;
break;
case 6:
score += 0.00888782576202543;
done = 1;
break;
case 7:
score += 0.00500853682004355;
done = 1;
break;
case 8:
score += 0.000917578527611209;
done = 1;
break;
case 9:
score += 0.0001224152260354;
done = 1;
break;
};
/* Tree 143 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X2== MISSING) {node = 9;
} else if (X2<= 1.84931063163094) {node = 1;
} else {node = 8;
} 
 break; 
case 1:
 if (X2== MISSING) {node = 7;
} else if (X2<= 0.0638885728549212) {node = 2;
} else {node = 3;
} 
 break; 
case 2:
score += -0.0116159916119713;
done = 1;
break;
case 3:
 if (X1== MISSING) {node = 6;
} else if (X1<= 0.644618934835307) {node = 4;
} else {node = 5;
} 
 break; 
case 4:
score += 0.00398053622058619;
done = 1;
break;
case 5:
score += -0.00273361115903203;
done = 1;
break;
case 6:
score += -0.00204417948899116;
done = 1;
break;
case 7:
score += -0.000881769133160339;
done = 1;
break;
case 8:
score += 0.0153256562864441;
done = 1;
break;
case 9:
score += 9.06763920159285e-05;
done = 1;
break;
};
/* Tree 144 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X6== MISSING) {node = 9;
} else if (X6<= 0.405288835871033) {node = 1;
} else {node = 5;
} 
 break; 
case 1:
 if (!strcmp (X5,"c")) {node = 2;
} else if (!strcmp (X5,"a")||!strcmp (X5,"b")) {node = 3;
} else {node = 4;
} 
 break; 
case 2:
score += 0.000934940470705702;
done = 1;
break;
case 3:
score += 0.0225457421540659;
done = 1;
break;
case 4:
score += 0.0129409414059058;
done = 1;
break;
case 5:
 if (X6== MISSING) {node = 8;
} else if (X6<= 2.89880173187703) {node = 6;
} else {node = 7;
} 
 break; 
case 6:
score += -0.000727891389476952;
done = 1;
break;
case 7:
score += 0.0172164978567635;
done = 1;
break;
case 8:
score += 7.67897426414554e-05;
done = 1;
break;
case 9:
score += 0.00146611812227401;
done = 1;
break;
};
/* Tree 145 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X6== MISSING) {node = 9;
} else if (X6<= 0.409847287111916) {node = 1;
} else {node = 5;
} 
 break; 
case 1:
 if (X2== MISSING) {node = 4;
} else if (X2<= 0.845510026207194) {node = 2;
} else {node = 3;
} 
 break; 
case 2:
score += -0.00653775610800382;
done = 1;
break;
case 3:
score += 0.0134203917250991;
done = 1;
break;
case 4:
score += 0.00425043190988965;
done = 1;
break;
case 5:
 if (X6== MISSING) {node = 8;
} else if (X6<= 1.51051450136583) {node = 6;
} else {node = 7;
} 
 break; 
case 6:
score += -0.00592454056699022;
done = 1;
break;
case 7:
score += 0.000149926848362483;
done = 1;
break;
case 8:
score += -0.00233119364523228;
done = 1;
break;
case 9:
score += -0.00135711306307424;
done = 1;
break;
};
/* Tree 146 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X2== MISSING) {node = 9;
} else if (X2<= 0.0760738914832473) {node = 1;
} else {node = 2;
} 
 break; 
case 1:
score += -0.0129599165673518;
done = 1;
break;
case 2:
 if (X1== MISSING) {node = 5;
} else if (X1<= 0.149271340225823) {node = 3;
} else {node = 4;
} 
 break; 
case 3:
score += 0.00974147713983027;
done = 1;
break;
case 4:
score += -0.00231654421695595;
done = 1;
break;
case 5:
 if (!strcmp (X4,"a")||!strcmp (X4,"b")||!strcmp (X4,"c")||!strcmp (X4,"e")||!strcmp (X4,"f")) {node = 6;
} else if (!strcmp (X4,"d")) {node = 7;
} else {node = 8;
} 
 break; 
case 6:
score += -7.65926197003096e-05;
done = 1;
break;
case 7:
score += 0.0129757861441927;
done = 1;
break;
case 8:
score += 0.0029118190408052;
done = 1;
break;
case 9:
score += -0.000197976743692966;
done = 1;
break;
};
/* Tree 147 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X6== MISSING) {node = 9;
} else if (X6<= 0.768875660025515) {node = 1;
} else {node = 5;
} 
 break; 
case 1:
 if (X1== MISSING) {node = 4;
} else if (X1<= 0.40803599182982) {node = 2;
} else {node = 3;
} 
 break; 
case 2:
score += -0.0238076621794348;
done = 1;
break;
case 3:
score += -0.000784064501181286;
done = 1;
break;
case 4:
score += -0.00760715790532772;
done = 1;
break;
case 5:
 if (X1== MISSING) {node = 8;
} else if (X1<= 0.69588136638049) {node = 6;
} else {node = 7;
} 
 break; 
case 6:
score += 0.0050533257472598;
done = 1;
break;
case 7:
score += -0.00450289877992013;
done = 1;
break;
case 8:
score += -0.00102476796392978;
done = 1;
break;
case 9:
score += -0.00189139194388222;
done = 1;
break;
};
/* Tree 148 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X6== MISSING) {node = 9;
} else if (X6<= 2.59588152926881) {node = 1;
} else {node = 5;
} 
 break; 
case 1:
 if (X2== MISSING) {node = 4;
} else if (X2<= 1.92911358410493) {node = 2;
} else {node = 3;
} 
 break; 
case 2:
score += 0.00221140437056627;
done = 1;
break;
case 3:
score += -0.0123440587351171;
done = 1;
break;
case 4:
score += 0.00152804929518208;
done = 1;
break;
case 5:
 if (X2== MISSING) {node = 8;
} else if (X2<= 0.899401761824265) {node = 6;
} else {node = 7;
} 
 break; 
case 6:
score += -0.000164222200550644;
done = 1;
break;
case 7:
score += -0.0156558937269519;
done = 1;
break;
case 8:
score += -0.00728201722619448;
done = 1;
break;
case 9:
score += 0.000224159450018345;
done = 1;
break;
};
/* Tree 149 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X2== MISSING) {node = 9;
} else if (X2<= 0.0705823134630919) {node = 1;
} else {node = 2;
} 
 break; 
case 1:
score += -0.0142518671807087;
done = 1;
break;
case 2:
 if (!strcmp (X4,"a")||!strcmp (X4,"b")||!strcmp (X4,"e")) {node = 3;
} else if (!strcmp (X4,"c")||!strcmp (X4,"d")||!strcmp (X4,"f")) {node = 4;
} else {node = 5;
} 
 break; 
case 3:
score += -0.000842527050179449;
done = 1;
break;
case 4:
score += 0.00542934090420144;
done = 1;
break;
case 5:
 if (!strcmp (X5,"a")||!strcmp (X5,"c")) {node = 6;
} else if (!strcmp (X5,"b")) {node = 7;
} else {node = 8;
} 
 break; 
case 6:
score += -0.00433555967174847;
done = 1;
break;
case 7:
score += 0.0100655518527346;
done = 1;
break;
case 8:
score += 0.00020177683596538;
done = 1;
break;
case 9:
score += 0.000804134048780867;
done = 1;
break;
};
/* Tree 150 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X2== MISSING) {node = 9;
} else if (X2<= 0.993645314360037) {node = 1;
} else {node = 8;
} 
 break; 
case 1:
 if (X2== MISSING) {node = 7;
} else if (X2<= 0.937332714674994) {node = 2;
} else {node = 6;
} 
 break; 
case 2:
 if (X6== MISSING) {node = 5;
} else if (X6<= 2.80218115670141) {node = 3;
} else {node = 4;
} 
 break; 
case 3:
score += -0.000829666772471057;
done = 1;
break;
case 4:
score += 0.0114466253494128;
done = 1;
break;
case 5:
score += 0.000522806088414448;
done = 1;
break;
case 6:
score += 0.0140576706185377;
done = 1;
break;
case 7:
score += 0.00158021737983033;
done = 1;
break;
case 8:
score += -0.00311406583465307;
done = 1;
break;
case 9:
score += -0.000710592828837568;
done = 1;
break;
};
/* Tree 151 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (!strcmp (X4,"a")||!strcmp (X4,"b")||!strcmp (X4,"c")||!strcmp (X4,"d")||!strcmp (X4,"e")) {node = 1;
} else if (!strcmp (X4,"f")) {node = 2;
} else {node = 3;
} 
 break; 
case 1:
score += 0.00106405410403722;
done = 1;
break;
case 2:
score += 0.0103115432117756;
done = 1;
break;
case 3:
 if (X1== MISSING) {node = 9;
} else if (X1<= 0.255246195942163) {node = 4;
} else {node = 5;
} 
 break; 
case 4:
score += 0.0116352836313152;
done = 1;
break;
case 5:
 if (X1== MISSING) {node = 8;
} else if (X1<= 0.518572649569251) {node = 6;
} else {node = 7;
} 
 break; 
case 6:
score += -0.0106858312948772;
done = 1;
break;
case 7:
score += 0.00462014354339193;
done = 1;
break;
case 8:
score += -0.000945665488705941;
done = 1;
break;
case 9:
score += 0.00958388706889717;
done = 1;
break;
};
/* Tree 152 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X6== MISSING) {node = 9;
} else if (X6<= 2.88790398440324) {node = 1;
} else {node = 8;
} 
 break; 
case 1:
 if (X1== MISSING) {node = 7;
} else if (X1<= 0.653967854334041) {node = 2;
} else {node = 6;
} 
 break; 
case 2:
 if (!strcmp (X4,"c")||!strcmp (X4,"e")||!strcmp (X4,"f")) {node = 3;
} else if (!strcmp (X4,"a")||!strcmp (X4,"b")||!strcmp (X4,"d")) {node = 4;
} else {node = 5;
} 
 break; 
case 3:
score += -0.00381652563361522;
done = 1;
break;
case 4:
score += 0.0092027010608127;
done = 1;
break;
case 5:
score += 0.00526434166253919;
done = 1;
break;
case 6:
score += -0.00465477044115829;
done = 1;
break;
case 7:
score += -0.00174585264976477;
done = 1;
break;
case 8:
score += 0.0141975906571407;
done = 1;
break;
case 9:
score += 1.74078099783059e-05;
done = 1;
break;
};
/* Tree 153 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X1== MISSING) {node = 9;
} else if (X1<= 0.813335958635435) {node = 1;
} else {node = 8;
} 
 break; 
case 1:
 if (!strcmp (X4,"b")||!strcmp (X4,"d")||!strcmp (X4,"e")||!strcmp (X4,"f")) {node = 2;
} else if (!strcmp (X4,"a")||!strcmp (X4,"c")) {node = 3;
} else {node = 4;
} 
 break; 
case 2:
score += -0.00693910666020337;
done = 1;
break;
case 3:
score += 0.000672795869317064;
done = 1;
break;
case 4:
 if (X6== MISSING) {node = 7;
} else if (X6<= 2.31523662514519) {node = 5;
} else {node = 6;
} 
 break; 
case 5:
score += -0.0027362580151842;
done = 1;
break;
case 6:
score += 0.0133472015652924;
done = 1;
break;
case 7:
score += 0.00213751761526324;
done = 1;
break;
case 8:
score += 0.00963520660591667;
done = 1;
break;
case 9:
score += 0.00318217050898976;
done = 1;
break;
};
/* Tree 154 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X2== MISSING) {node = 9;
} else if (X2<= 0.769166661659256) {node = 1;
} else {node = 5;
} 
 break; 
case 1:
 if (!strcmp (X4,"e")||!strcmp (X4,"f")) {node = 2;
} else if (!strcmp (X4,"a")||!strcmp (X4,"b")||!strcmp (X4,"c")||!strcmp (X4,"d")) {node = 3;
} else {node = 4;
} 
 break; 
case 2:
score += -0.00748957248084803;
done = 1;
break;
case 3:
score += 0.00751356256457705;
done = 1;
break;
case 4:
score += 0.000130356612018012;
done = 1;
break;
case 5:
 if (X2== MISSING) {node = 8;
} else if (X2<= 1.06644278485328) {node = 6;
} else {node = 7;
} 
 break; 
case 6:
score += -0.00921979591410946;
done = 1;
break;
case 7:
score += 0.000176298806783847;
done = 1;
break;
case 8:
score += -0.0024443806731932;
done = 1;
break;
case 9:
score += -0.000398410753362711;
done = 1;
break;
};
/* Tree 155 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (!strcmp (X3,"d")) {node = 1;
} else if (!strcmp (X3,"c")||!strcmp (X3,"b")||!strcmp (X3,"a")) {node = 5;
} else {node = 9;
} 
 break; 
case 1:
 if (!strcmp (X4,"a")||!strcmp (X4,"e")||!strcmp (X4,"f")) {node = 2;
} else if (!strcmp (X4,"b")||!strcmp (X4,"c")||!strcmp (X4,"d")) {node = 3;
} else {node = 4;
} 
 break; 
case 2:
score += -0.0166197539887705;
done = 1;
break;
case 3:
score += -0.00116833878305443;
done = 1;
break;
case 4:
score += -0.00355933042652265;
done = 1;
break;
case 5:
 if (!strcmp (X4,"a")||!strcmp (X4,"b")||!strcmp (X4,"c")||!strcmp (X4,"e")) {node = 6;
} else if (!strcmp (X4,"d")||!strcmp (X4,"f")) {node = 7;
} else {node = 8;
} 
 break; 
case 6:
score += 0.000794289871381551;
done = 1;
break;
case 7:
score += 0.00888453061406077;
done = 1;
break;
case 8:
score += 0.00481984907286683;
done = 1;
break;
case 9:
score += 0.00155914722392676;
done = 1;
break;
};
/* Tree 156 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (!strcmp (X4,"a")||!strcmp (X4,"b")||!strcmp (X4,"c")||!strcmp (X4,"d")||!strcmp (X4,"e")) {node = 1;
} else if (!strcmp (X4,"f")) {node = 5;
} else {node = 6;
} 
 break; 
case 1:
 if (X2== MISSING) {node = 4;
} else if (X2<= 0.714231298770756) {node = 2;
} else {node = 3;
} 
 break; 
case 2:
score += 0.00203760730957941;
done = 1;
break;
case 3:
score += -0.00330479031617569;
done = 1;
break;
case 4:
score += -0.00116783126587365;
done = 1;
break;
case 5:
score += 0.00640001043484324;
done = 1;
break;
case 6:
 if (X1== MISSING) {node = 9;
} else if (X1<= 0.330656563397497) {node = 7;
} else {node = 8;
} 
 break; 
case 7:
score += -0.00681470359769908;
done = 1;
break;
case 8:
score += 0.00419524996770502;
done = 1;
break;
case 9:
score += -0.00668814763163084;
done = 1;
break;
};
/* Tree 157 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X6== MISSING) {node = 9;
} else if (X6<= 2.38947571918834) {node = 1;
} else {node = 8;
} 
 break; 
case 1:
 if (X2== MISSING) {node = 7;
} else if (X2<= 0.915253079263493) {node = 2;
} else {node = 6;
} 
 break; 
case 2:
 if (X6== MISSING) {node = 5;
} else if (X6<= 0.584619384957477) {node = 3;
} else {node = 4;
} 
 break; 
case 3:
score += -0.0105725308901815;
done = 1;
break;
case 4:
score += 0.000661918703727369;
done = 1;
break;
case 5:
score += -0.00291829050751831;
done = 1;
break;
case 6:
score += 0.00459779479868297;
done = 1;
break;
case 7:
score += 0.00117797598436139;
done = 1;
break;
case 8:
score += -0.00611570406747854;
done = 1;
break;
case 9:
score += -0.000280760026006599;
done = 1;
break;
};
/* Tree 158 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (!strcmp (X4,"b")||!strcmp (X4,"d")||!strcmp (X4,"e")||!strcmp (X4,"f")) {node = 1;
} else if (!strcmp (X4,"a")||!strcmp (X4,"c")) {node = 8;
} else {node = 9;
} 
 break; 
case 1:
 if (!strcmp (X3,"d")||!strcmp (X3,"c")||!strcmp (X3,"b")) {node = 2;
} else if (!strcmp (X3,"a")) {node = 6;
} else {node = 7;
} 
 break; 
case 2:
 if (X1== MISSING) {node = 5;
} else if (X1<= 0.821693115751259) {node = 3;
} else {node = 4;
} 
 break; 
case 3:
score += -0.00721142224142582;
done = 1;
break;
case 4:
score += 0.00606758195207339;
done = 1;
break;
case 5:
score += -0.0031841612344636;
done = 1;
break;
case 6:
score += 0.0117290080894324;
done = 1;
break;
case 7:
score += -0.00105038557382196;
done = 1;
break;
case 8:
score += 0.00862433199834758;
done = 1;
break;
case 9:
score += 0.00144216418312382;
done = 1;
break;
};
/* Tree 159 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X2== MISSING) {node = 9;
} else if (X2<= 0.195578099228442) {node = 1;
} else {node = 2;
} 
 break; 
case 1:
score += -0.00863220147683063;
done = 1;
break;
case 2:
 if (!strcmp (X4,"a")||!strcmp (X4,"b")||!strcmp (X4,"c")||!strcmp (X4,"d")) {node = 3;
} else if (!strcmp (X4,"e")||!strcmp (X4,"f")) {node = 7;
} else {node = 8;
} 
 break; 
case 3:
 if (X2== MISSING) {node = 6;
} else if (X2<= 0.576297166524455) {node = 4;
} else {node = 5;
} 
 break; 
case 4:
score += 0.00516113491237176;
done = 1;
break;
case 5:
score += -0.00495937187137442;
done = 1;
break;
case 6:
score += -0.00238324287187539;
done = 1;
break;
case 7:
score += 0.00121642775022234;
done = 1;
break;
case 8:
score += 0.00538205825750971;
done = 1;
break;
case 9:
score += -0.000123787192378221;
done = 1;
break;
};
/* Tree 160 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X1== MISSING) {node = 6;
} else if (X1<= 0.723229184281081) {node = 1;
} else {node = 2;
} 
 break; 
case 1:
score += -0.0030635791375527;
done = 1;
break;
case 2:
 if (!strcmp (X4,"a")||!strcmp (X4,"c")||!strcmp (X4,"e")) {node = 3;
} else if (!strcmp (X4,"b")||!strcmp (X4,"d")||!strcmp (X4,"f")) {node = 4;
} else {node = 5;
} 
 break; 
case 3:
score += -0.000946588655991527;
done = 1;
break;
case 4:
score += 0.0115441922487334;
done = 1;
break;
case 5:
score += 0.00654787988684344;
done = 1;
break;
case 6:
 if (X6== MISSING) {node = 9;
} else if (X6<= 2.87907240260392) {node = 7;
} else {node = 8;
} 
 break; 
case 7:
score += -0.00133288017027195;
done = 1;
break;
case 8:
score += 0.0131023368180566;
done = 1;
break;
case 9:
score += -0.000239303125701601;
done = 1;
break;
};
/* Tree 161 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X2== MISSING) {node = 9;
} else if (X2<= 0.129679769743234) {node = 1;
} else {node = 2;
} 
 break; 
case 1:
score += 0.0101353965593422;
done = 1;
break;
case 2:
 if (X2== MISSING) {node = 8;
} else if (X2<= 0.648068539099768) {node = 3;
} else {node = 7;
} 
 break; 
case 3:
 if (!strcmp (X4,"b")||!strcmp (X4,"d")||!strcmp (X4,"e")) {node = 4;
} else if (!strcmp (X4,"a")||!strcmp (X4,"c")||!strcmp (X4,"f")) {node = 5;
} else {node = 6;
} 
 break; 
case 4:
score += -0.00847683695457163;
done = 1;
break;
case 5:
score += 0.00482185370193674;
done = 1;
break;
case 6:
score += -0.0112352184545787;
done = 1;
break;
case 7:
score += 0.00128389847615208;
done = 1;
break;
case 8:
score += -0.000538064757041323;
done = 1;
break;
case 9:
score += 0.000315812148269358;
done = 1;
break;
};
/* Tree 162 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X6== MISSING) {node = 9;
} else if (X6<= 0.887070531025529) {node = 1;
} else {node = 5;
} 
 break; 
case 1:
 if (X6== MISSING) {node = 4;
} else if (X6<= 0.176205921918154) {node = 2;
} else {node = 3;
} 
 break; 
case 2:
score += -0.00614134532701899;
done = 1;
break;
case 3:
score += 0.00544894563245585;
done = 1;
break;
case 4:
score += 0.00307820429983599;
done = 1;
break;
case 5:
 if (X1== MISSING) {node = 8;
} else if (X1<= 0.208753312588669) {node = 6;
} else {node = 7;
} 
 break; 
case 6:
score += -0.00954629120275411;
done = 1;
break;
case 7:
score += -0.00073263884742786;
done = 1;
break;
case 8:
score += -0.00874693631911261;
done = 1;
break;
case 9:
score += -0.00252626584034011;
done = 1;
break;
};
/* Tree 163 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X2== MISSING) {node = 9;
} else if (X2<= 0.252921021776274) {node = 1;
} else {node = 2;
} 
 break; 
case 1:
score += -0.00791784080708111;
done = 1;
break;
case 2:
 if (X2== MISSING) {node = 8;
} else if (X2<= 0.765540479915217) {node = 3;
} else {node = 7;
} 
 break; 
case 3:
 if (!strcmp (X4,"b")||!strcmp (X4,"c")||!strcmp (X4,"e")) {node = 4;
} else if (!strcmp (X4,"a")||!strcmp (X4,"d")||!strcmp (X4,"f")) {node = 5;
} else {node = 6;
} 
 break; 
case 4:
score += -0.00173571868881481;
done = 1;
break;
case 5:
score += 0.00724458222035687;
done = 1;
break;
case 6:
score += 0.0148925005844958;
done = 1;
break;
case 7:
score += 0.000134589391345879;
done = 1;
break;
case 8:
score += 0.00173345766704247;
done = 1;
break;
case 9:
score += 0.000459486268458155;
done = 1;
break;
};
/* Tree 164 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X6== MISSING) {node = 9;
} else if (X6<= 2.38947571918834) {node = 1;
} else {node = 8;
} 
 break; 
case 1:
 if (X6== MISSING) {node = 7;
} else if (X6<= 2.15265490638558) {node = 2;
} else {node = 6;
} 
 break; 
case 2:
 if (X6== MISSING) {node = 5;
} else if (X6<= 1.13947955961339) {node = 3;
} else {node = 4;
} 
 break; 
case 3:
score += 0.00217081535631734;
done = 1;
break;
case 4:
score += -0.0048297523864474;
done = 1;
break;
case 5:
score += -0.00129013948280231;
done = 1;
break;
case 6:
score += 0.00990255651973118;
done = 1;
break;
case 7:
score += 3.96857848254315e-05;
done = 1;
break;
case 8:
score += -0.00747445130965648;
done = 1;
break;
case 9:
score += -0.0014030285373151;
done = 1;
break;
};
/* Tree 165 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X1== MISSING) {node = 3;
} else if (X1<= 0.20372823276557) {node = 1;
} else {node = 2;
} 
 break; 
case 1:
score += -0.00921938962765829;
done = 1;
break;
case 2:
score += 0.00215372502759825;
done = 1;
break;
case 3:
 if (X6== MISSING) {node = 9;
} else if (X6<= 0.353258166345768) {node = 4;
} else {node = 5;
} 
 break; 
case 4:
score += 0.0121090877296082;
done = 1;
break;
case 5:
 if (X6== MISSING) {node = 8;
} else if (X6<= 0.602384401252493) {node = 6;
} else {node = 7;
} 
 break; 
case 6:
score += -0.0134285608701647;
done = 1;
break;
case 7:
score += 0.000765092159396227;
done = 1;
break;
case 8:
score += -0.000839407748293266;
done = 1;
break;
case 9:
score += 0.0008282015178001;
done = 1;
break;
};
/* Tree 166 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (!strcmp (X4,"a")||!strcmp (X4,"d")||!strcmp (X4,"e")) {node = 1;
} else if (!strcmp (X4,"b")||!strcmp (X4,"c")||!strcmp (X4,"f")) {node = 5;
} else {node = 6;
} 
 break; 
case 1:
 if (!strcmp (X5,"a")) {node = 2;
} else if (!strcmp (X5,"b")||!strcmp (X5,"c")) {node = 3;
} else {node = 4;
} 
 break; 
case 2:
score += -0.00764824509819257;
done = 1;
break;
case 3:
score += 0.00307749821942305;
done = 1;
break;
case 4:
score += -0.000458461116054629;
done = 1;
break;
case 5:
score += 0.00504358491967379;
done = 1;
break;
case 6:
 if (X2== MISSING) {node = 9;
} else if (X2<= 0.682219906244427) {node = 7;
} else {node = 8;
} 
 break; 
case 7:
score += -0.0132914517491351;
done = 1;
break;
case 8:
score += 0.00196904918185334;
done = 1;
break;
case 9:
score += -0.00126802677320481;
done = 1;
break;
};
/* Tree 167 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X2== MISSING) {node = 9;
} else if (X2<= 1.85036205430515) {node = 1;
} else {node = 8;
} 
 break; 
case 1:
 if (!strcmp (X3,"d")||!strcmp (X3,"c")||!strcmp (X3,"b")) {node = 2;
} else if (!strcmp (X3,"a")) {node = 3;
} else {node = 7;
} 
 break; 
case 2:
score += -0.00293033514390297;
done = 1;
break;
case 3:
 if (X6== MISSING) {node = 6;
} else if (X6<= 0.60992340487428) {node = 4;
} else {node = 5;
} 
 break; 
case 4:
score += -0.00800664231865796;
done = 1;
break;
case 5:
score += 0.00978389808705004;
done = 1;
break;
case 6:
score += 0.00376650942041351;
done = 1;
break;
case 7:
score += -0.00101695098266969;
done = 1;
break;
case 8:
score += 0.0131219703164065;
done = 1;
break;
case 9:
score += -0.000338282760314036;
done = 1;
break;
};
/* Tree 168 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (!strcmp (X5,"c")) {node = 1;
} else if (!strcmp (X5,"a")||!strcmp (X5,"b")) {node = 5;
} else {node = 9;
} 
 break; 
case 1:
 if (X2== MISSING) {node = 4;
} else if (X2<= 1.29062128835358) {node = 2;
} else {node = 3;
} 
 break; 
case 2:
score += -0.000667505962875091;
done = 1;
break;
case 3:
score += -0.0153280527029085;
done = 1;
break;
case 4:
score += -0.00502604688558772;
done = 1;
break;
case 5:
 if (!strcmp (X4,"a")) {node = 6;
} else if (!strcmp (X4,"b")||!strcmp (X4,"c")||!strcmp (X4,"d")||!strcmp (X4,"e")||!strcmp (X4,"f")) {node = 7;
} else {node = 8;
} 
 break; 
case 6:
score += -0.00647716542794896;
done = 1;
break;
case 7:
score += 0.00196196275384802;
done = 1;
break;
case 8:
score += 0.00668648800636812;
done = 1;
break;
case 9:
score += 0.000114671772091007;
done = 1;
break;
};
/* Tree 169 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X2== MISSING) {node = 9;
} else if (X2<= 1.86439897748642) {node = 1;
} else {node = 8;
} 
 break; 
case 1:
 if (X1== MISSING) {node = 4;
} else if (X1<= 0.669946717680432) {node = 2;
} else {node = 3;
} 
 break; 
case 2:
score += -0.0024102865900558;
done = 1;
break;
case 3:
score += 0.00518111324588537;
done = 1;
break;
case 4:
 if (X6== MISSING) {node = 7;
} else if (X6<= 1.17575396073516) {node = 5;
} else {node = 6;
} 
 break; 
case 5:
score += 0.00409688284159662;
done = 1;
break;
case 6:
score += -0.00612396139816525;
done = 1;
break;
case 7:
score += -0.0021173904561786;
done = 1;
break;
case 8:
score += 0.00932247187357426;
done = 1;
break;
case 9:
score += -0.000295552738016542;
done = 1;
break;
};
/* Tree 170 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (!strcmp (X5,"a")||!strcmp (X5,"c")) {node = 1;
} else if (!strcmp (X5,"b")) {node = 2;
} else {node = 9;
} 
 break; 
case 1:
score += -0.00234958788240853;
done = 1;
break;
case 2:
 if (X2== MISSING) {node = 8;
} else if (X2<= 0.994222777895629) {node = 3;
} else {node = 7;
} 
 break; 
case 3:
 if (X2== MISSING) {node = 6;
} else if (X2<= 0.306035280460492) {node = 4;
} else {node = 5;
} 
 break; 
case 4:
score += 0.00173725050781874;
done = 1;
break;
case 5:
score += 0.0148531072197214;
done = 1;
break;
case 6:
score += 0.00966141393792658;
done = 1;
break;
case 7:
score += -0.000785516237427491;
done = 1;
break;
case 8:
score += 0.00497830730759545;
done = 1;
break;
case 9:
score += 0.000200519643712852;
done = 1;
break;
};
/* Tree 171 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X2== MISSING) {node = 9;
} else if (X2<= 0.299904819577932) {node = 1;
} else {node = 2;
} 
 break; 
case 1:
score += -0.00637114719571533;
done = 1;
break;
case 2:
 if (!strcmp (X4,"a")) {node = 3;
} else if (!strcmp (X4,"b")||!strcmp (X4,"c")||!strcmp (X4,"d")||!strcmp (X4,"e")||!strcmp (X4,"f")) {node = 4;
} else {node = 5;
} 
 break; 
case 3:
score += -0.00571430710969469;
done = 1;
break;
case 4:
score += 0.000667666712424024;
done = 1;
break;
case 5:
 if (!strcmp (X5,"a")||!strcmp (X5,"c")) {node = 6;
} else if (!strcmp (X5,"b")) {node = 7;
} else {node = 8;
} 
 break; 
case 6:
score += -0.00293614473128067;
done = 1;
break;
case 7:
score += 0.0139798512460083;
done = 1;
break;
case 8:
score += 0.00359283617223436;
done = 1;
break;
case 9:
score += -0.000314553875379075;
done = 1;
break;
};
/* Tree 172 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X1== MISSING) {node = 3;
} else if (X1<= 0.318250093958341) {node = 1;
} else {node = 2;
} 
 break; 
case 1:
score += 0.00382243935603372;
done = 1;
break;
case 2:
score += -0.00106626844625109;
done = 1;
break;
case 3:
 if (X6== MISSING) {node = 9;
} else if (X6<= 0.458369625848718) {node = 4;
} else {node = 8;
} 
 break; 
case 4:
 if (X6== MISSING) {node = 7;
} else if (X6<= 0.245371608878486) {node = 5;
} else {node = 6;
} 
 break; 
case 5:
score += -0.00624838135793777;
done = 1;
break;
case 6:
score += 0.0157491248699336;
done = 1;
break;
case 7:
score += 0.0047503717559979;
done = 1;
break;
case 8:
score += -0.00457913463642445;
done = 1;
break;
case 9:
score += -0.00316557306181501;
done = 1;
break;
};
/* Tree 173 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X2== MISSING) {node = 9;
} else if (X2<= 0.974018385866657) {node = 1;
} else {node = 5;
} 
 break; 
case 1:
 if (!strcmp (X3,"d")||!strcmp (X3,"c")) {node = 2;
} else if (!strcmp (X3,"b")||!strcmp (X3,"a")) {node = 3;
} else {node = 4;
} 
 break; 
case 2:
score += -0.00649851728903865;
done = 1;
break;
case 3:
score += 0.00171551814014169;
done = 1;
break;
case 4:
score += -0.00222980596363784;
done = 1;
break;
case 5:
 if (X6== MISSING) {node = 8;
} else if (X6<= 0.694809702923521) {node = 6;
} else {node = 7;
} 
 break; 
case 6:
score += 0.0111723473123032;
done = 1;
break;
case 7:
score += 0.00133042725261396;
done = 1;
break;
case 8:
score += 0.0034908487291311;
done = 1;
break;
case 9:
score += 0.000584756145204477;
done = 1;
break;
};
/* Tree 174 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X6== MISSING) {node = 9;
} else if (X6<= 0.671878758003004) {node = 1;
} else {node = 5;
} 
 break; 
case 1:
 if (!strcmp (X4,"b")||!strcmp (X4,"f")) {node = 2;
} else if (!strcmp (X4,"a")||!strcmp (X4,"c")||!strcmp (X4,"d")||!strcmp (X4,"e")) {node = 3;
} else {node = 4;
} 
 break; 
case 2:
score += -0.0219854974891184;
done = 1;
break;
case 3:
score += -0.00510990216895125;
done = 1;
break;
case 4:
score += -0.00320766848740803;
done = 1;
break;
case 5:
 if (X6== MISSING) {node = 8;
} else if (X6<= 2.66822376439814) {node = 6;
} else {node = 7;
} 
 break; 
case 6:
score += 0.0023922597459705;
done = 1;
break;
case 7:
score += -0.00878766845232247;
done = 1;
break;
case 8:
score += 0.000202376903005901;
done = 1;
break;
case 9:
score += -0.00152563659684807;
done = 1;
break;
};
/* Tree 175 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (!strcmp (X4,"c")||!strcmp (X4,"d")||!strcmp (X4,"e")) {node = 1;
} else if (!strcmp (X4,"a")||!strcmp (X4,"b")||!strcmp (X4,"f")) {node = 8;
} else {node = 9;
} 
 break; 
case 1:
 if (X2== MISSING) {node = 7;
} else if (X2<= 0.99110492435284) {node = 2;
} else {node = 6;
} 
 break; 
case 2:
 if (!strcmp (X5,"c")) {node = 3;
} else if (!strcmp (X5,"a")||!strcmp (X5,"b")) {node = 4;
} else {node = 5;
} 
 break; 
case 3:
score += -0.0216467658431981;
done = 1;
break;
case 4:
score += -0.0033783538130865;
done = 1;
break;
case 5:
score += -0.00756486490332041;
done = 1;
break;
case 6:
score += 0.0035455061455668;
done = 1;
break;
case 7:
score += -0.00218887891192338;
done = 1;
break;
case 8:
score += 0.00548485790569969;
done = 1;
break;
case 9:
score += 0.00201128627008323;
done = 1;
break;
};
/* Tree 176 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (!strcmp (X4,"b")||!strcmp (X4,"c")) {node = 1;
} else if (!strcmp (X4,"a")||!strcmp (X4,"d")||!strcmp (X4,"e")||!strcmp (X4,"f")) {node = 2;
} else {node = 9;
} 
 break; 
case 1:
score += -0.00192597738020538;
done = 1;
break;
case 2:
 if (X6== MISSING) {node = 8;
} else if (X6<= 2.536099124467) {node = 3;
} else {node = 4;
} 
 break; 
case 3:
score += 0.00397289635932977;
done = 1;
break;
case 4:
 if (X6== MISSING) {node = 7;
} else if (X6<= 2.85170051059686) {node = 5;
} else {node = 6;
} 
 break; 
case 5:
score += -0.0158036051724058;
done = 1;
break;
case 6:
score += 0.00456386367191124;
done = 1;
break;
case 7:
score += -0.00731715982060704;
done = 1;
break;
case 8:
score += 0.00165698739934273;
done = 1;
break;
case 9:
score += -0.00404668075436621;
done = 1;
break;
};
/* Tree 177 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (!strcmp (X4,"a")||!strcmp (X4,"c")||!strcmp (X4,"d")) {node = 1;
} else if (!strcmp (X4,"b")||!strcmp (X4,"e")||!strcmp (X4,"f")) {node = 5;
} else {node = 9;
} 
 break; 
case 1:
 if (X2== MISSING) {node = 4;
} else if (X2<= 0.707086526555941) {node = 2;
} else {node = 3;
} 
 break; 
case 2:
score += 0.00750293281989009;
done = 1;
break;
case 3:
score += -0.00657764576106082;
done = 1;
break;
case 4:
score += -0.00218692770893634;
done = 1;
break;
case 5:
 if (X1== MISSING) {node = 8;
} else if (X1<= 0.770705857430585) {node = 6;
} else {node = 7;
} 
 break; 
case 6:
score += -0.00539332892359601;
done = 1;
break;
case 7:
score += 0.0117298763775191;
done = 1;
break;
case 8:
score += 0.00711974514826185;
done = 1;
break;
case 9:
score += -0.000597213113664268;
done = 1;
break;
};
/* Tree 178 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X1== MISSING) {node = 6;
} else if (X1<= 0.813335958635435) {node = 1;
} else {node = 5;
} 
 break; 
case 1:
 if (!strcmp (X4,"b")||!strcmp (X4,"c")||!strcmp (X4,"f")) {node = 2;
} else if (!strcmp (X4,"a")||!strcmp (X4,"d")||!strcmp (X4,"e")) {node = 3;
} else {node = 4;
} 
 break; 
case 2:
score += -0.00293650724028018;
done = 1;
break;
case 3:
score += 0.00431924949018484;
done = 1;
break;
case 4:
score += -0.0044000031356471;
done = 1;
break;
case 5:
score += 0.0104365632552745;
done = 1;
break;
case 6:
 if (X2== MISSING) {node = 9;
} else if (X2<= 0.201722727390006) {node = 7;
} else {node = 8;
} 
 break; 
case 7:
score += 0.00954563318174152;
done = 1;
break;
case 8:
score += -0.000234230183874539;
done = 1;
break;
case 9:
score += 0.000877117925854558;
done = 1;
break;
};
/* Tree 179 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X2== MISSING) {node = 9;
} else if (X2<= 1.14068339159712) {node = 1;
} else {node = 5;
} 
 break; 
case 1:
 if (X2== MISSING) {node = 4;
} else if (X2<= 0.108065020525828) {node = 2;
} else {node = 3;
} 
 break; 
case 2:
score += -0.00857999768406476;
done = 1;
break;
case 3:
score += 0.00347807983429295;
done = 1;
break;
case 4:
score += 0.00198121503891061;
done = 1;
break;
case 5:
 if (X1== MISSING) {node = 8;
} else if (X1<= 0.20372823276557) {node = 6;
} else {node = 7;
} 
 break; 
case 6:
score += -0.0136482596157514;
done = 1;
break;
case 7:
score += 0.00120318093078642;
done = 1;
break;
case 8:
score += -0.00792339216973798;
done = 1;
break;
case 9:
score += -0.000933856167860383;
done = 1;
break;
};
/* Tree 180 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X6== MISSING) {node = 9;
} else if (X6<= 1.51417000615038) {node = 1;
} else {node = 5;
} 
 break; 
case 1:
 if (X2== MISSING) {node = 4;
} else if (X2<= 1.0075190924108) {node = 2;
} else {node = 3;
} 
 break; 
case 2:
score += 0.000938525876717234;
done = 1;
break;
case 3:
score += -0.00758691340281895;
done = 1;
break;
case 4:
score += -0.0030446711637218;
done = 1;
break;
case 5:
 if (X2== MISSING) {node = 8;
} else if (X2<= 1.43783958000131) {node = 6;
} else {node = 7;
} 
 break; 
case 6:
score += 0.000182338955786564;
done = 1;
break;
case 7:
score += 0.00983557546385299;
done = 1;
break;
case 8:
score += 0.00289731172368025;
done = 1;
break;
case 9:
score += -2.37592537195361e-06;
done = 1;
break;
};
/* Tree 181 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X6== MISSING) {node = 9;
} else if (X6<= 0.693491260986775) {node = 1;
} else {node = 5;
} 
 break; 
case 1:
 if (!strcmp (X4,"b")||!strcmp (X4,"c")||!strcmp (X4,"d")||!strcmp (X4,"f")) {node = 2;
} else if (!strcmp (X4,"a")||!strcmp (X4,"e")) {node = 3;
} else {node = 4;
} 
 break; 
case 2:
score += -0.0038692945183804;
done = 1;
break;
case 3:
score += 0.0211966673530651;
done = 1;
break;
case 4:
score += 0.0131797503928745;
done = 1;
break;
case 5:
 if (X2== MISSING) {node = 8;
} else if (X2<= 1.81481163855642) {node = 6;
} else {node = 7;
} 
 break; 
case 6:
score += -0.00359915520947998;
done = 1;
break;
case 7:
score += 0.0101396225986773;
done = 1;
break;
case 8:
score += -0.00235645168914415;
done = 1;
break;
case 9:
score += -0.000912275175355305;
done = 1;
break;
};
/* Tree 182 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X1== MISSING) {node = 6;
} else if (X1<= 0.267341185477562) {node = 1;
} else {node = 2;
} 
 break; 
case 1:
score += -0.00740597465632096;
done = 1;
break;
case 2:
 if (X1== MISSING) {node = 5;
} else if (X1<= 0.354739024303854) {node = 3;
} else {node = 4;
} 
 break; 
case 3:
score += 0.0168011572629241;
done = 1;
break;
case 4:
score += 0.00111975338746156;
done = 1;
break;
case 5:
score += 0.00317327056162928;
done = 1;
break;
case 6:
 if (X2== MISSING) {node = 9;
} else if (X2<= 0.21312853647396) {node = 7;
} else {node = 8;
} 
 break; 
case 7:
score += 0.00800275477079597;
done = 1;
break;
case 8:
score += -0.0030413163479919;
done = 1;
break;
case 9:
score += -0.00145163944453001;
done = 1;
break;
};
/* Tree 183 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (!strcmp (X3,"d")||!strcmp (X3,"c")||!strcmp (X3,"b")) {node = 1;
} else if (!strcmp (X3,"a")) {node = 2;
} else {node = 9;
} 
 break; 
case 1:
score += -0.00203988103009243;
done = 1;
break;
case 2:
 if (!strcmp (X4,"a")||!strcmp (X4,"b")) {node = 3;
} else if (!strcmp (X4,"c")||!strcmp (X4,"d")||!strcmp (X4,"e")||!strcmp (X4,"f")) {node = 4;
} else {node = 5;
} 
 break; 
case 3:
score += -0.00491548452370527;
done = 1;
break;
case 4:
score += 0.00817315577651091;
done = 1;
break;
case 5:
 if (X6== MISSING) {node = 8;
} else if (X6<= 1.44644324469846) {node = 6;
} else {node = 7;
} 
 break; 
case 6:
score += -0.00125138918072208;
done = 1;
break;
case 7:
score += 0.0168312473965483;
done = 1;
break;
case 8:
score += 0.00703648591719349;
done = 1;
break;
case 9:
score += -0.000290432598857457;
done = 1;
break;
};
/* Tree 184 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X6== MISSING) {node = 9;
} else if (X6<= 2.88790398440324) {node = 1;
} else {node = 8;
} 
 break; 
case 1:
 if (!strcmp (X4,"c")||!strcmp (X4,"e")||!strcmp (X4,"f")) {node = 2;
} else if (!strcmp (X4,"a")||!strcmp (X4,"b")||!strcmp (X4,"d")) {node = 6;
} else {node = 7;
} 
 break; 
case 2:
 if (X2== MISSING) {node = 5;
} else if (X2<= 0.372947179246694) {node = 3;
} else {node = 4;
} 
 break; 
case 3:
score += -0.0163175805039574;
done = 1;
break;
case 4:
score += -0.000696434365143977;
done = 1;
break;
case 5:
score += -0.00326429400440098;
done = 1;
break;
case 6:
score += 0.00186616642882412;
done = 1;
break;
case 7:
score += -0.00356285606062411;
done = 1;
break;
case 8:
score += 0.0157273417025357;
done = 1;
break;
case 9:
score += -0.00029127309196482;
done = 1;
break;
};
/* Tree 185 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X2== MISSING) {node = 9;
} else if (X2<= 1.86439897748642) {node = 1;
} else {node = 8;
} 
 break; 
case 1:
 if (X6== MISSING) {node = 7;
} else if (X6<= 0.147701415815391) {node = 2;
} else {node = 3;
} 
 break; 
case 2:
score += 0.011706777480931;
done = 1;
break;
case 3:
 if (X6== MISSING) {node = 6;
} else if (X6<= 1.51074675761629) {node = 4;
} else {node = 5;
} 
 break; 
case 4:
score += -0.00408354901553733;
done = 1;
break;
case 5:
score += 0.00154783614705642;
done = 1;
break;
case 6:
score += -0.000823273395088318;
done = 1;
break;
case 7:
score += -0.000296800669205155;
done = 1;
break;
case 8:
score += 0.013873269320758;
done = 1;
break;
case 9:
score += 0.000383362690313076;
done = 1;
break;
};
/* Tree 186 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X2== MISSING) {node = 9;
} else if (X2<= 1.19299399410374) {node = 1;
} else {node = 5;
} 
 break; 
case 1:
 if (X2== MISSING) {node = 4;
} else if (X2<= 1.09545383276418) {node = 2;
} else {node = 3;
} 
 break; 
case 2:
score += -0.00123678311502366;
done = 1;
break;
case 3:
score += -0.0180936434238583;
done = 1;
break;
case 4:
score += -0.00232432248978719;
done = 1;
break;
case 5:
 if (X2== MISSING) {node = 8;
} else if (X2<= 1.74757621856406) {node = 6;
} else {node = 7;
} 
 break; 
case 6:
score += 0.00705972757786576;
done = 1;
break;
case 7:
score += -0.00574514352515195;
done = 1;
break;
case 8:
score += 0.00395960088976674;
done = 1;
break;
case 9:
score += 6.35683944433046e-05;
done = 1;
break;
};
/* Tree 187 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X2== MISSING) {node = 9;
} else if (X2<= 0.965519925579429) {node = 1;
} else {node = 5;
} 
 break; 
case 1:
 if (!strcmp (X4,"b")||!strcmp (X4,"d")||!strcmp (X4,"e")) {node = 2;
} else if (!strcmp (X4,"a")||!strcmp (X4,"c")||!strcmp (X4,"f")) {node = 3;
} else {node = 4;
} 
 break; 
case 2:
score += -0.00156332000219287;
done = 1;
break;
case 3:
score += 0.00895193396082887;
done = 1;
break;
case 4:
score += 0.00447532807159727;
done = 1;
break;
case 5:
 if (X1== MISSING) {node = 8;
} else if (X1<= 0.836477663484402) {node = 6;
} else {node = 7;
} 
 break; 
case 6:
score += -0.00142978391505965;
done = 1;
break;
case 7:
score += 0.0103460480261058;
done = 1;
break;
case 8:
score += -0.0039689537518213;
done = 1;
break;
case 9:
score += 0.000845378752870576;
done = 1;
break;
};
/* Tree 188 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X1== MISSING) {node = 3;
} else if (X1<= 0.109148132032715) {node = 1;
} else {node = 2;
} 
 break; 
case 1:
score += -0.0108446792151738;
done = 1;
break;
case 2:
score += -0.00138964463298747;
done = 1;
break;
case 3:
 if (X2== MISSING) {node = 9;
} else if (X2<= 0.201722727390006) {node = 4;
} else {node = 5;
} 
 break; 
case 4:
score += 0.0141413365257982;
done = 1;
break;
case 5:
 if (!strcmp (X4,"a")||!strcmp (X4,"f")) {node = 6;
} else if (!strcmp (X4,"b")||!strcmp (X4,"c")||!strcmp (X4,"d")||!strcmp (X4,"e")) {node = 7;
} else {node = 8;
} 
 break; 
case 6:
score += -0.00794659995403445;
done = 1;
break;
case 7:
score += -0.00237197120674845;
done = 1;
break;
case 8:
score += 0.00565560932229274;
done = 1;
break;
case 9:
score += -0.000355032373208318;
done = 1;
break;
};
/* Tree 189 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X2== MISSING) {node = 9;
} else if (X2<= 1.91642654873431) {node = 1;
} else {node = 8;
} 
 break; 
case 1:
 if (X1== MISSING) {node = 7;
} else if (X1<= 0.766128863091581) {node = 2;
} else {node = 6;
} 
 break; 
case 2:
 if (X6== MISSING) {node = 5;
} else if (X6<= 1.32501057337504) {node = 3;
} else {node = 4;
} 
 break; 
case 3:
score += -0.0073422514384067;
done = 1;
break;
case 4:
score += 0.00423789434645347;
done = 1;
break;
case 5:
score += -0.000216007878492749;
done = 1;
break;
case 6:
score += 0.00903696532858732;
done = 1;
break;
case 7:
score += 0.0013074498609041;
done = 1;
break;
case 8:
score += -0.0113467653192237;
done = 1;
break;
case 9:
score += 0.000845405075123416;
done = 1;
break;
};
/* Tree 190 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X6== MISSING) {node = 9;
} else if (X6<= 0.695378967910074) {node = 1;
} else {node = 8;
} 
 break; 
case 1:
 if (X2== MISSING) {node = 7;
} else if (X2<= 0.921250217827037) {node = 2;
} else {node = 3;
} 
 break; 
case 2:
score += -0.00296724554060463;
done = 1;
break;
case 3:
 if (X6== MISSING) {node = 6;
} else if (X6<= 0.336612536106259) {node = 4;
} else {node = 5;
} 
 break; 
case 4:
score += -0.00631438556522175;
done = 1;
break;
case 5:
score += 0.0258189116371175;
done = 1;
break;
case 6:
score += 0.0120474985504007;
done = 1;
break;
case 7:
score += 0.00330757288548715;
done = 1;
break;
case 8:
score += -0.00230929800539423;
done = 1;
break;
case 9:
score += -0.000803976606638023;
done = 1;
break;
};
/* Tree 191 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X6== MISSING) {node = 9;
} else if (X6<= 2.88999137375504) {node = 1;
} else {node = 8;
} 
 break; 
case 1:
 if (X6== MISSING) {node = 7;
} else if (X6<= 2.01180602924433) {node = 2;
} else {node = 3;
} 
 break; 
case 2:
score += 0.00186867577424587;
done = 1;
break;
case 3:
 if (!strcmp (X3,"d")||!strcmp (X3,"c")||!strcmp (X3,"b")) {node = 4;
} else if (!strcmp (X3,"a")) {node = 5;
} else {node = 6;
} 
 break; 
case 4:
score += -0.00757906997420952;
done = 1;
break;
case 5:
score += 0.0021698703560303;
done = 1;
break;
case 6:
score += -0.00514183489164957;
done = 1;
break;
case 7:
score += -0.000585002958817536;
done = 1;
break;
case 8:
score += 0.0141602769414599;
done = 1;
break;
case 9:
score += 4.80823719356138e-06;
done = 1;
break;
};
/* Tree 192 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (!strcmp (X4,"a")||!strcmp (X4,"c")||!strcmp (X4,"d")||!strcmp (X4,"e")) {node = 1;
} else if (!strcmp (X4,"b")||!strcmp (X4,"f")) {node = 2;
} else {node = 6;
} 
 break; 
case 1:
score += -0.00297880079571497;
done = 1;
break;
case 2:
 if (X1== MISSING) {node = 5;
} else if (X1<= 0.681249711662531) {node = 3;
} else {node = 4;
} 
 break; 
case 3:
score += -0.0051833936639528;
done = 1;
break;
case 4:
score += -0.00227132170518366;
done = 1;
break;
case 5:
score += 0.00675958644619524;
done = 1;
break;
case 6:
 if (X6== MISSING) {node = 9;
} else if (X6<= 0.768875660025515) {node = 7;
} else {node = 8;
} 
 break; 
case 7:
score += -0.00711042625828969;
done = 1;
break;
case 8:
score += 0.00823112692759594;
done = 1;
break;
case 9:
score += 0.00439573863112453;
done = 1;
break;
};
/* Tree 193 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (!strcmp (X4,"a")||!strcmp (X4,"b")||!strcmp (X4,"e")||!strcmp (X4,"f")) {node = 1;
} else if (!strcmp (X4,"c")||!strcmp (X4,"d")) {node = 2;
} else {node = 6;
} 
 break; 
case 1:
score += -0.000153070930048955;
done = 1;
break;
case 2:
 if (X6== MISSING) {node = 5;
} else if (X6<= 1.22520803846419) {node = 3;
} else {node = 4;
} 
 break; 
case 3:
score += 0.0110685217996399;
done = 1;
break;
case 4:
score += 0.00128177603803075;
done = 1;
break;
case 5:
score += 0.00571639521125989;
done = 1;
break;
case 6:
 if (X1== MISSING) {node = 9;
} else if (X1<= 0.674605924054049) {node = 7;
} else {node = 8;
} 
 break; 
case 7:
score += 0.00266776394302875;
done = 1;
break;
case 8:
score += -0.00588552721628234;
done = 1;
break;
case 9:
score += -0.0049251937555049;
done = 1;
break;
};
/* Tree 194 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X6== MISSING) {node = 9;
} else if (X6<= 2.66627535643056) {node = 1;
} else {node = 5;
} 
 break; 
case 1:
 if (X2== MISSING) {node = 4;
} else if (X2<= 1.59617023752071) {node = 2;
} else {node = 3;
} 
 break; 
case 2:
score += 0.000353604684372317;
done = 1;
break;
case 3:
score += -0.00424638236756275;
done = 1;
break;
case 4:
score += -0.00079639207861145;
done = 1;
break;
case 5:
 if (X2== MISSING) {node = 8;
} else if (X2<= 0.988541448488832) {node = 6;
} else {node = 7;
} 
 break; 
case 6:
score += -0.000760659585608461;
done = 1;
break;
case 7:
score += -0.0184704999012995;
done = 1;
break;
case 8:
score += -0.00902525173293096;
done = 1;
break;
case 9:
score += -0.00178385523712979;
done = 1;
break;
};
/* Tree 195 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X2== MISSING) {node = 9;
} else if (X2<= 1.58962019952014) {node = 1;
} else {node = 8;
} 
 break; 
case 1:
 if (X1== MISSING) {node = 7;
} else if (X1<= 0.788415090297349) {node = 2;
} else {node = 6;
} 
 break; 
case 2:
 if (X6== MISSING) {node = 5;
} else if (X6<= 1.34585539496038) {node = 3;
} else {node = 4;
} 
 break; 
case 3:
score += -0.000953879219261472;
done = 1;
break;
case 4:
score += 0.0115206234632888;
done = 1;
break;
case 5:
score += 0.00519297717503867;
done = 1;
break;
case 6:
score += -0.00647237541175444;
done = 1;
break;
case 7:
score += 0.0023610978835016;
done = 1;
break;
case 8:
score += -0.00475231217622778;
done = 1;
break;
case 9:
score += 0.000720987408597698;
done = 1;
break;
};
/* Tree 196 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X1== MISSING) {node = 3;
} else if (X1<= 0.925776914926246) {node = 1;
} else {node = 2;
} 
 break; 
case 1:
score += -0.00255359310860852;
done = 1;
break;
case 2:
score += 0.00818571523011165;
done = 1;
break;
case 3:
 if (X2== MISSING) {node = 9;
} else if (X2<= 0.201722727390006) {node = 4;
} else {node = 5;
} 
 break; 
case 4:
score += 0.00964597263633454;
done = 1;
break;
case 5:
 if (!strcmp (X4,"a")||!strcmp (X4,"c")||!strcmp (X4,"d")||!strcmp (X4,"e")) {node = 6;
} else if (!strcmp (X4,"b")||!strcmp (X4,"f")) {node = 7;
} else {node = 8;
} 
 break; 
case 6:
score += -0.00368504423330896;
done = 1;
break;
case 7:
score += 0.00418762370778847;
done = 1;
break;
case 8:
score += 0.00157086106810892;
done = 1;
break;
case 9:
score += 0.0012243645131735;
done = 1;
break;
};
/* Tree 197 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (!strcmp (X4,"b")||!strcmp (X4,"e")||!strcmp (X4,"f")) {node = 1;
} else if (!strcmp (X4,"a")||!strcmp (X4,"c")||!strcmp (X4,"d")) {node = 2;
} else {node = 9;
} 
 break; 
case 1:
score += -0.00176369761416426;
done = 1;
break;
case 2:
 if (X2== MISSING) {node = 8;
} else if (X2<= 0.681452610064298) {node = 3;
} else {node = 4;
} 
 break; 
case 3:
score += 0.00978511202302111;
done = 1;
break;
case 4:
 if (X2== MISSING) {node = 7;
} else if (X2<= 0.927748318063095) {node = 5;
} else {node = 6;
} 
 break; 
case 5:
score += -0.0111231483130929;
done = 1;
break;
case 6:
score += 0.00200872311125687;
done = 1;
break;
case 7:
score += -0.00122373754704461;
done = 1;
break;
case 8:
score += 0.00200712047895294;
done = 1;
break;
case 9:
score += -0.00258629994015984;
done = 1;
break;
};
/* Tree 198 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X2== MISSING) {node = 9;
} else if (X2<= 0.187773866811767) {node = 1;
} else {node = 5;
} 
 break; 
case 1:
 if (!strcmp (X5,"a")||!strcmp (X5,"b")) {node = 2;
} else if (!strcmp (X5,"c")) {node = 3;
} else {node = 4;
} 
 break; 
case 2:
score += 0.000535623855982968;
done = 1;
break;
case 3:
score += 0.0189958346176783;
done = 1;
break;
case 4:
score += 0.00690121377380896;
done = 1;
break;
case 5:
 if (X2== MISSING) {node = 8;
} else if (X2<= 1.8424147341866) {node = 6;
} else {node = 7;
} 
 break; 
case 6:
score += -4.44221883468827e-05;
done = 1;
break;
case 7:
score += -0.0077106449840483;
done = 1;
break;
case 8:
score += -0.000564754052308517;
done = 1;
break;
case 9:
score += 0.00030129821552111;
done = 1;
break;
};
/* Tree 199 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X1== MISSING) {node = 3;
} else if (X1<= 0.785505188978277) {node = 1;
} else {node = 2;
} 
 break; 
case 1:
score += -0.00191301982986824;
done = 1;
break;
case 2:
score += 0.00578866598401731;
done = 1;
break;
case 3:
 if (!strcmp (X4,"a")||!strcmp (X4,"d")||!strcmp (X4,"e")) {node = 4;
} else if (!strcmp (X4,"b")||!strcmp (X4,"c")||!strcmp (X4,"f")) {node = 5;
} else {node = 9;
} 
 break; 
case 4:
score += 0.00099680492813945;
done = 1;
break;
case 5:
 if (X6== MISSING) {node = 8;
} else if (X6<= 1.85323003807571) {node = 6;
} else {node = 7;
} 
 break; 
case 6:
score += 0.0174673425118131;
done = 1;
break;
case 7:
score += -0.00148758985961002;
done = 1;
break;
case 8:
score += 0.00910487234794994;
done = 1;
break;
case 9:
score += 0.00101237407993375;
done = 1;
break;
};
/* Tree 200 */
/* Total terminal nodes: 7 */
done = 0;
node = 0;
while (done == 0) switch (node) {
case 0:
 if (X2== MISSING) {node = 9;
} else if (X2<= 1.84815811365843) {node = 1;
} else {node = 8;
} 
 break; 
case 1:
 if (!strcmp (X4,"a")||!strcmp (X4,"c")||!strcmp (X4,"e")) {node = 2;
} else if (!strcmp (X4,"b")||!strcmp (X4,"d")||!strcmp (X4,"f")) {node = 3;
} else {node = 7;
} 
 break; 
case 2:
score += -0.00375675753549726;
done = 1;
break;
case 3:
 if (!strcmp (X3,"d")||!strcmp (X3,"c")) {node = 4;
} else if (!strcmp (X3,"b")||!strcmp (X3,"a")) {node = 5;
} else {node = 6;
} 
 break; 
case 4:
score += -0.00492754028563919;
done = 1;
break;
case 5:
score += 0.00740288287429124;
done = 1;
break;
case 6:
score += 0.00115963064141507;
done = 1;
break;
case 7:
score += -0.00568013088904049;
done = 1;
break;
case 8:
score += 0.0104736693918214;
done = 1;
break;
case 9:
score += -0.00167097171133309;
done = 1;
break;
};
return score;
}

