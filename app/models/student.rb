class Student < ApplicationRecord
	has_many :lessons
	
	validates :name, presence: true 
	validates :subject, presence: true 
	validates :location, presence: true 
	validates :pay_by_hour, presence: true 

end
