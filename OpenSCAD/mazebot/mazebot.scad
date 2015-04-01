translate([0,0,10]){
difference(){
union(){
//head
translate([7.5, 6.5, 21]){
	sphere(6.5,$fn=100);
}
//eye
translate([11,6.5,24]){
rotate([0,90,0]){
cylinder(h=3,r=2,$fn=8);
}
}
translate([13.5,6.5,24]){
sphere(r=1.5,$fn=100);
}
//body
cube([15,13,21]);
//arms
translate([-2.0,-2.5,16]){
rotate([0,90,90]){
cylinder(h=16, r=2.5, $fn=100);
}
}
translate([17,-2.5,16]){
rotate([0,90,90]){
cylinder(h=16, r=2.5,$fn=100);
}
}
//hands
translate([-4.25,-4.5,16]){
rotate([90,0,90]){
difference()
{
	cylinder(h=4.5, r=2.5);
	translate([-0.8,0,-0.5])
	cylinder(h=5.5, r=2.0);
}
}
}
translate([14.75,-4.5,16]){
rotate([90,0,90]){
difference()
{
	cylinder(h=4.5, r=2.5);
	translate([-0.8,0,-0.5])
	cylinder(h=5.5, r=2.0);
}
}
}
//legs
translate([3.75,6.5,-9]){
cylinder(h=10, r=3,$fn=100);
}
translate([11.25,6.5,-9]){
cylinder(h=10, r=3,$fn=100);
}
//feet
translate([3.75,6.5,-10]){
cylinder(h=3, r=4,$fn=100);
}
translate([11.25,6.5,-10]){
cylinder(h=3, r=4,$fn=100);
}
//jetpack
translate([1,13,8.5]){
cube([13,7,3.5]);
}
translate([4.25,16.5,4]){
difference(){
cylinder(h=13, r=3.25,$fn=100);
translate([0,0,9.25]){
cylinder(h=6.5, r=3,$fn=100);
}
}
}
translate([10.5,16.5,4]){
difference(){
cylinder(h=13, r=3.25,$fn=100);
translate([0,0,9.25]){
cylinder(h=6.5, r=3,$fn=100);
}
}
}
translate([4.25,16.5,0]){
cylinder(h=6,r2=3.25,r1=0.5,$fn=100);
}
translate([10.75,16.5,0]){
cylinder(h=6,r2=3.25,r1=0.5,$fn=100);
}
//bar
translate([-5,-4,15]){
rotate([0,90,0]){
cylinder(h=25,r=0.75,$fn=6);
}
}
}
//lead hole
translate([7.5,6.5,0.5]){
cylinder(h=27.5,r=1,$fn=100);
}
}
//cap
union(){
translate([-2,-2,-9]){
difference(){
sphere(r=1.5,$fn=100);
translate([-1.5,-1.5,-3]){
cube(3);
}
}
translate([0,0,-1]){
cylinder(h=1,r=0.74,$fn=100);
}
}
}
}