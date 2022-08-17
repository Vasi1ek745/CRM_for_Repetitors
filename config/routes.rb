Rails.application.routes.draw do
  devise_for :users, controllers: { registrations: "registrations"}
  
  resources :students   
  resources :lessons

  root "main_page#index"

end
