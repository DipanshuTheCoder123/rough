package First_Ai_App.controller;

import org.springframework.web.bind.annotation.RestController;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.ai.chat.client.ChatClient;
import org.springframework.web.bind.annotation.GetMapping;



@RestController
public class Ai_Controller {
  
	 
	ChatClient chatClient;
	
	public Ai_Controller(ChatClient.Builder builder) {
		   this.chatClient = builder.build();
	}
	
	  
	@GetMapping("/ai")
	public String getMethodName(@RequestParam() String q) {
		 
		 return chatClient.prompt(q).call().content();
	}
	
	
	 
}
