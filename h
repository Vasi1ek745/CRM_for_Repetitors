Запустите «git help <команда>», чтобы прочесть о конкретной подкоманде

Основные машиночитаемые команды
   add                  Добавление содержимого файла в индекс
   am                   Применение серии патчей из почтового сообщения
   archive              Создание архива файлов из указанного дерева
   bisect               Выполнение двоичного поиска коммита, который вносит ошибку
   branch               Вывод списка, создание или удаление веток
   bundle               Перемещение объектов и ссылок по архиву
   checkout             Переключение веток или восстановление файлов в рабочем каталоге
   cherry-pick          Применение изменений, сделанных в каком-то существующем коммите
   citool               Графическая альтернатива для git-commit
   clean                Удаление неотслеживаемых файлов из рабочего каталога
   clone                Клонирование репозитория в новый каталог
   commit               Запись изменений в репозиторий
   describe             Присвоение объекту удобочитаемое имя на основе доступной ссылки
   diff                 Вывод разницы между коммитами, коммитом и рабочим каталогом и т.д.
   fetch                Загрузка объектов и ссылок из другого репозитория
   format-patch         Подготовка патчей для отправки по электронной почте
   gc                   Очистка ненужных файлов и оптимизация локального репозитория
   gitk                 Браузер репозитория Git
   grep                 Вывод строк, соответствующих шаблону
   gui                  Портативный графический интерфейс для Git
   init                 Создание пустого репозитория Git или переинициализация существующего
   log                  Вывод истории коммитов
   merge                Объединение одной или нескольких историй разработки вместе
   mv                   Перемещение или переименование файла, каталога или символьной ссылки
   notes                Добавление или просмотр заметок объекта
   pull                 Извлечение изменений и объединение с другим репозиторием или локальной веткой
   push                 Обновление внешних ссылок и связанных объектов
   range-diff           Сравнение двух диапазонов коммитов (например двух версий ветки)
   rebase               Повторное применение коммитов над верхушкой другой ветки
   reset                Сброс текущего состояния HEAD на указанное состояние
   restore              Restore working tree files
   revert               Обращение изменений существующих коммитов
   rm                   Удаление файлов из рабочего каталога и индекса
   shortlog             Обобщение вывода «git log»
   show                 Вывод различных типов объектов
   sparse-checkout      Initialize and modify the sparse-checkout
   stash                Спрятать изменения в изменённом рабочем каталоге
   status               Вывод состояния рабочего каталога
   submodule            Инициализация, обновление или просмотр подмодулей
   switch               Switch branches
   tag                  Создание, вывод списка, удаление или проверка метки, подписанной с помощью GPG
   worktree             Управление несколькими рабочими каталогами

Вспомогательные команды / Манипуляторы
   config               Получение и установка глобальных опций или опций репозитория
   fast-export          Экспорт данных Git
   fast-import          Внутренний интерфейс для быстрого импорта данных Git
   filter-branch        Перезапись веток
   mergetool            Запуск инструментов разрешения конфликтов слияния
   pack-refs            Упаковка указателей на ветки и меток для эффективного доступа к репозиторию
   prune                Очистка всех недостижимых объектов из базы данных объектов
   reflog               Управление информацией журнала ссылок
   remote               Управление набором отслеживаемых репозиториев
   repack               Упаковка неупакованных объектов в репозитории
   replace              Создание, вывод списка, удаление ссылок для замены объектов

Вспомогательные команды / Запросчики
   annotate             Аннотирование строк файла информацией о коммитах
   blame                Показ редакции и автора последнего изменившего каждую строку файла
   count-objects        Подсчет количества неупакованных объектов и их потребления диска
   difftool             Показ изменений с помощью распространенных утилит сравнения
   fsck                 Проверка связности и валидности объектов в базе данных
   gitweb               Веб интерфейс Git (веб-интерфейс для Git репозиториев)
   help                 Отображение справочной информации о Git
   instaweb             Мгновенный просмотр вашего рабочего репозитория в gitweb
   merge-tree           Вывод трёхходового слияние без затрагивания индекса
   rerere               Повторное использование записанных разрешений конфликтов при слияниях
   show-branch          Вывод веток и их коммитов
   verify-commit        Проверка подписи GPG коммитов
   verify-tag           Проверка подписи GPG меток
   whatchanged          Вывод журнала с изменениями, которые вводил каждый из коммитов

Взаимодействие с другими
   archimport           Импортирование GNU Arch репозитория в Git
   cvsexportcommit      Экспорт единственного коммита в виде рабочей копии CVS
   cvsimport            Спасение ваших данных из другой СКВ которую люди любят ненавидеть
   cvsserver            Эмулятор сервера CVS для Git
   imap-send            Отправка коллекции патчей из стандартного ввода в папку IMAP
   p4                   Импорт и отправка в репозитории Perforce
   quiltimport          Применение упорядоченного списка патчей над текущей веткой
   request-pull         Генерация сводки предстоящих изменений
   send-email           Отправка коллекции патчей на электронную почту
   svn                  Двухсторонние операции между репозиториями Subversion и Git

Низкоуровневые команды / Манипуляторы
   apply                Применение патча к файлам и/или индексу
   checkout-index       Копирование файлов из индекса в рабочий каталог
   commit-graph         Запись и проверка commit-graph файлов Git
   commit-tree          Создание нового объекта коммита
   hash-object          Вычисление идентификатора объекта и возможное создание двоичного объекта из файла
   index-pack           Построение файла индекса для существующего упакованного архива
   merge-file           Запуск трёхходового слияния файлов
   merge-index          Запуск слияния для файлов, которые требуют слияния
   mktag                Создание объектов меток
   mktree               Построение объекта дерева из текста формата ls-tree
   multi-pack-index     Запись и проверка файлов multi-pack-index
   pack-objects         Создание упакованного архива объектов
   prune-packed         Удаление дополнительных объектов, которые уже содержатся в файлах пакетов
   read-tree            Чтение информации о дереве в индекс
   symbolic-ref         Чтение, изменение и удаление символических ссылок
   unpack-objects       Распаковка объектов из упакованного архива
   update-index         Регистрация содержимого файла из рабочего каталога в индекс
   update-ref           Безопасное обновление имени объекта хранящегося в ссылке
   write-tree           Создание объекта дерева из текущего индекса

Низкоуровневые команды / Запросчики
   cat-file             Вывод содержимого или типа и информации о размере для объектов репозитория
   cherry               Поиск коммитов которые еще не применены вышестоящим репозиторием
   diff-files           Сравнение седержимого файлов в рабочем каталоге с файлами в индексе
   diff-index           Сравнение дерева файлов с рабочим каталогом или индексом
   diff-tree            Сравнение содержимого и режима двоичных объектов, найденных по двум объектам дерева
   for-each-ref         Вывод информации о каждой ссылке
   get-tar-commit-id    Извлечение идентификатора коммита из архива, созданного с помощью git-archive
   ls-files             Вывод информации о файлах в индексе и в рабочем каталоге
   ls-remote            Вывод списка ссылок во внешнем репозитории
   ls-tree              Вывод содержимого объекта дерева
   merge-base           Поиск подходящих общих предков для возможного слияния
   name-rev             Поиск символьных имён для указанных редакций
   pack-redundant       Поиск избыточных файлов пакетов
   rev-list             Вывод списка объектов коммита в обратном хронологическом порядке
   rev-parse            Разбор и обработка параметров
   show-index           Вывод индекса упакованного архива
   show-ref             Вывод ссылок в локальном репозитории
   unpack-file          Создание временного файла с содержимым двоичного объекта
   var                  Вывод логической переменной Git
   verify-pack          Проверка файлов упакованных архивов Git

Low-level Commands / Syncing Repositories
   daemon               Очень простой сервер для Git репозиториев
   fetch-pack           Получение недостающих объектов из другого репозитория
   http-backend         Серверная реализация протокола Git над HTTP
   send-pack            Отправка объектов в другой репозиторий с помощью протокола Git
   update-server-info   Обновление файла со вспомогательной информацией для глупых серверов

Низкоуровневые команды / Внутренние вспомогательные
   check-attr           Вывод информации из gitattributes
   check-ignore         Отладка файлов gitignore / exclude
   check-mailmap        Вывод каноничных имён и адресов электронной почты контактов
   check-ref-format     Удостовериться, что имя ссылки правильно сформировано
   column               Вывод данных по колонкам
   credential           Получение и сохранение учетных записей пользователя
   credential-cache     Помощник для временного хранения паролей в памяти
   credential-store     Помощник для хранения учетных записей на диске
   fmt-merge-msg        Создание сообщения коммита для слияния
   interpret-trailers   Добавление или разбор структурированной информации в сообщениях коммита
   mailinfo             Извлекает патч и авторство из одного сообщения электронной почты
   mailsplit            Простая программа UNIX для разбора файла mbox
   merge-one-file       Стандартная программа-помощник для использования совместно с git-merge-index
   patch-id             Вычисление уникального идентификатора для патча
   sh-i18n              Код настройки интернационализации для сценариев оболочки Git
   sh-setup             Общий код настройки для сценариев оболочки Git
   stripspace           Удаление ненужных пробелов
