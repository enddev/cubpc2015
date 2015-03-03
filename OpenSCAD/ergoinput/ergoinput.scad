// computer corner stand in
/*hull()
{
translate([10,0,5])
{
	union()
	{
		translate([10,10,0])
			cube(size=[90,90,10]);
		translate([15,15,0])
			cylinder(r=15,h=10);
		translate([15,0,0])
			cube(size=[85,15,10]);
		translate([0,15,0])
			cube(size=[15,85,10]);
	}
}
color([1,0,0]) translate([10,0,0])
{
	union()
	{
		translate([15,15,0])
			cube(size=[85,85,5]);
		translate([20,20,0])
			cylinder(r=15,h=5);
		translate([15,5,0])
			cube(size=[85,15,5]);
		translate([5,15,0])
			cube(size=[15,85,5]);
	}
}
}*/
//breadboard: 85x55x10mm
//translate([-62.5,10,0])
//	color([0.8,0.8,0.8]) cube(size=[55,85,10]);

// ergo stand
// built for a mac book pro
// holds a breadboard with potentiometer control
difference()
{
	union()
	{
		translate([0,-15,0])
			difference()
			{
				difference()
				{
					translate([-35,52.5,0])
						scale([1.25,1.6,1])
							color ([0,0,1]) cylinder(r=35,h=50);
					translate([-62.5,10,-0.1])
						color([0.8,0.8,0.8]) cube(size=[55,85,15]);
					translate([-40.5,94,-0.1])
						color([0.5,0.5,0.5]) cube(size=[30,20,15]);
					translate([-40.5,-9,-0.1])
						color([0.5,0.5,0.5]) cube(size=[30,20,15]);
				}
				translate([-30,60,14.7])
					scale([1.4,1.6,1])
						color ([0,1,0]) cylinder(r1=7,r2=35,h=36);
			}
			translate([-5,-1,0])
				color ([1,0,0]) cube(size=[50,120,16]);
	}

	hull()
	{
		translate([1,0,4.9])
		{
			union()
			{
				translate([10,10,0])
					cube(size=[90,110,10]);
				translate([15,15,0])
					cylinder(r=15,h=10);
				translate([15,0,0])
					cube(size=[85,15,10]);
				translate([0,15,0])
					cube(size=[15,105,10]);
			}
		}
		color([1,0,0]) translate([1,0,-0.1])
		{
			union()
			{
				translate([15,15,0])
					cube(size=[85,105,5]);
				translate([20,20,0])
					cylinder(r=15,h=5);
				translate([15,5,0])
					cube(size=[85,15,5]);
				translate([5,15,0])
					cube(size=[15,105,5]);
			}
		}
	}
}