create database bd_ins;
USE bd_ins;
Create table alumnos
(
ID int(20) auto_increment, 
NombreAlumno VARCHAR(60) NOT NULL,
Grupo VARCHAR(60) NOT NULL,
PRIMARY KEY (NombreAlumno))ENGINE=InnODB DEFAULT CHARSET=Latin1;

Create table estudiantes
(
idEstudiante int(20) auto_increment, 
NombreEstudiante VARCHAR(60) NOT NULL,
DireccionEstudiante varchar(60) not null,
PRIMARY KEY (NombreEstudiante))ENGINE=InnODB DEFAULT CHARSET=Latin1;