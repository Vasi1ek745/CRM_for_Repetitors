class Lesson < ApplicationRecord
  
  belongs_to :student

  validates :date, presence: true 
  validates :duration, presence: true 
  validates :location, presence: true 

end
