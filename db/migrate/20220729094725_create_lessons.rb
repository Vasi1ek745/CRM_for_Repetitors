class CreateLessons < ActiveRecord::Migration[7.0]
  def change
    create_table :lessons do |t|
      t.datetime :date
      t.integer :duration
      t.string :location
      t.string :subject
      t.references :student, null: false, foreign_key: true

      t.timestamps
    end
  end
end
