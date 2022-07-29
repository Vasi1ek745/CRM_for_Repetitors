Rails.application.routes.draw do
  
  resources :students do

    resources :lessons

  end

  root "main_page#index"

end
