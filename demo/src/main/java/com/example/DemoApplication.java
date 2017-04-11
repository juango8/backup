package com.example;

import java.io.IOException;

import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.stereotype.Controller;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.servlet.config.annotation.EnableWebMvc;

@SpringBootApplication
@EnableWebMvc
@Controller
public class DemoApplication {

	@RequestMapping("/hello")
	void hello(HttpServletRequest request, HttpServletResponse response){
		try {
			String name = request.getParameter("name");
			if (name == null){
				name = "Mundo";
			}
			String html = "<html><i style='color: red'>Hola" + name + "!</i></html>";
			response.setHeader("Content-Type", "text/html");
			response.getOutputStream().print(html);
		}catch (IOException e){
		}
	}
	public static void main(String[] args) {
		SpringApplication.run(DemoApplication.class, args);
	}
}
