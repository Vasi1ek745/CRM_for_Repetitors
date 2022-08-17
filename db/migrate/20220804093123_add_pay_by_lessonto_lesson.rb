class AddPayByLessontoLesson < ActiveRecord::Migration[7.0]
  def change
    add_column :lessons, :pay_by_lesson, :integer, column_options: { null: true, default: nil }
    add_column :lessons, :pay_method, :string, column_options: { null: true, default: nil }
  end
end
