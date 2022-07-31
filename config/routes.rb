Rails.application.routes.draw do
  devise_for :users
  
  resources :students   
  resources :lessons

  root "main_page#index"

end
