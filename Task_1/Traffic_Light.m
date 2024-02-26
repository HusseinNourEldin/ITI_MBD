
rectangle('Position', [-2, -4.5, 4, 13],'Curvature', [0.5, 0.2], 'FaceColor', 'black');
hold on;

rectangle('Position', [-0.5, -7.5, 1, 3], 'FaceColor', 'b');
hold on;

angles = linspace(0, 2 * pi, 100); % 100 points to approximate the circle
grey = [0.1 0.5 0.5];

center = [0, 6]; 
radius = 1.5; 
x1 = center(1) + radius * cos(angles);
y1 = center(2) + radius * sin(angles);
fill(x1, y1, grey); 
hold on;

% second circle
center = [0 2];
x2 = center(1) + radius * cos(angles);
y2 = center(2) + radius * sin(angles);
fill(x2, y2, grey); 

% third circle
center = [0 -2];
x3 = center(1) + radius * cos(angles);
y3 = center(2) + radius * sin(angles);
fill(x3, y3, grey);


xlim([-10, 10]);
ylim([-10, 10]);

while 1
    fill(x1, y1, 'r');
    fill(x2, y2, grey);
    fill(x3, y3, grey);
    pause(3);
    
    fill(x1, y1, grey);
    fill(x2, y2, 'y');
    fill(x3, y3, grey);
    pause(1);
    
    fill(x1, y1, grey);
    fill(x2, y2, grey);
    fill(x3, y3, 'g');
    pause(3);
end