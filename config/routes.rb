Rails.application.routes.draw do
  
  resources :students   
  resources :lessons

  root "main_page#index"

end
