Rails.application.routes.draw do
  
  resources :students

  root "main_page#index"

end
