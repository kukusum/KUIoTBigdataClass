import pymysql


def main():
    host = "localhost"
    port = 3306
    database = "madangdb"
    username = "root"
    password = "0000"
    config = True

    try:
        conn = pymysql.connect(
            host=host,
            port=port,
            db=database,
            user=username,
            password=password,
            charset="utf8",
        )
        print("연결 성공")
    except:  # ignore error
        print("연결 실패")
        config = False

    if config:
        cursor = conn.cursor()
        cursor.execute("SELECT * FROM Book")
        books = cursor.fetchall()
        for book in books:
            print(book)
        cursor.close()
        conn.close()


if __name__ == "__main__":
    main()