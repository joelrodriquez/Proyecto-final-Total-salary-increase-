#region cal1

            // declaramos variables

            double vSalario, vAumento, vN1, vN2, vN3;
            String vNombre;

            Console.WriteLine("Total Salaria Increase");

            // Insertar nombre
            Console.Write("Favor insertar su nombre: ");
            vNombre = Console.ReadLine();

            //Insertar Salario
            Console.Write("Favor insertar su sueldo: ");
            vSalario = Convert.ToDouble(Console.ReadLine());

            //// solicita un año
            //Console.Write("Dime un año: ");
            //vIncremento = Convert.ToInt32(Console.ReadLine());

            //Calculo del aumento 1er año
            vAumento =(vSalario * 0.10) + vSalario;
            vN1 = (vAumento * 0.10) + vAumento;
            vN2 = (vN1 * 0.10) + vN1;
            vN3 = (vN2 * 0.10) + vN2;

            //for (double i = 1; i<4; i++)
            //{ 

            //    Console.WriteLine("Tu sueldo en {0} años será de: "+(vAumento * 5), i);
            //}

            Console.WriteLine("Tu sueldo dentro de un año será: {0}", vAumento );
            Console.WriteLine("Tu sueldo dentro de dos año será: {0}", vN1);
            Console.WriteLine("Tu sueldo dentro de tres año será: {0}", vN2);
            Console.WriteLine("Tu sueldo dentro de cuatro año será: {0}", vN3);


            Console.WriteLine("Fin del programa. Pase Buen dia "+vNombre);

            Console.ReadKey();



            #endregion