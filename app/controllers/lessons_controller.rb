class LessonsController < ApplicationController
  before_action :array_student, only: [:new , :edit]

  def index
    @lessons = Lesson.order(:date)
  end

  def show
  end

  def new
    @lesson = Lesson.new
    
  end

  def create
      @lesson = Lesson.new lesson_params    
      if @lesson.save
        flash[:success] = "Новый урок добавлен"
        redirect_to lessons_path
      else
        render :new
      end
  end

  def edit
    @lesson = Lesson.find params[:id]
  end

  def update
    @lesson = Lesson.find params[:id]

      if @lesson.update(lesson_params)
        flash[:success] = "Урок обновлен"
        redirect_to lessons_path
      else
        render :edit
      end
  end

  def destroy
    @lesson = Lesson.find params[:id]
      if @lesson.delete
        flash[:success] = "Урок удален"
        redirect_to lessons_path , status: 303
      else
        render :index
      end
  end


  private
    def lesson_params
      params.require(:lesson).permit(:student_id, :date, :duration, :location, :subject) 
    end
    def array_student
      @array_student = Student.all.map { |student| [student.name , student.id]}
    end
end
