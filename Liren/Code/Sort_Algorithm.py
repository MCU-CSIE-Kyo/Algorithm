class SortAlgorithm:
    min_index = 0
    temp = 0

    def select_sort(self, sort_list: list):
        """
        選擇排序法\n
        第一層 for 是走訪全部的 element\n
        第二層 for 是走訪該點(第一層定位)往後的 element，並找出最小的 index\n
        然後進行交換，當第一層全部走訪結束時，選擇排序即結束
        """
        # 陣列長度
        list_length = len(sort_list)
        for i in range(0, list_length):
            # 初始視角
            self.min_index = i
            for j in range(i+1, list_length):
                if sort_list[self.min_index] > sort_list[j]:
                    self.min_index = j
            self.temp = sort_list[i]
            sort_list[i] = sort_list[self.min_index]
            sort_list[self.min_index] = self.temp

    def bubble_sort(self, sort_list: list):
        """
        氣泡排序法\n
        第一層 for 會逐漸變小，因為最右方是已知的最大數字，再比較其沒有意義\n
        第二層 for 則再進行左右比較並交換與否
        """
        list_length = len(sort_list)
        for i in range(list_length-1, 0, -1):
            for j in range(0, i):
                if sort_list[j] > sort_list[j+1]:
                    sort_list[j], sort_list[j+1] = sort_list[j+1], sort_list[j]

    def insert_sort(self, sort_list: list):
        """
        插入排序法 (不使用額外空間)\n
        第一層走訪是為了取出每個數值\n
        第二層走訪是為了比較當前數值跟已被排序過的"全部"數字，如果如果遇到比自己小的，就交換；反之則停止
        """
        list_length = len(sort_list)
        for i in range(0, list_length):
            for j in range(i-1, -1, -1):
                if sort_list[i] < sort_list[j]:
                    self.temp = sort_list[j] 
                    sort_list[j] = sort_list[i]
                    sort_list[i] = self.temp
                    i -= 1
                print('過程', sort_list)
        print(sort_list)




sort = SortAlgorithm()
dst = [8, 36, 10, 50, 1, 2]
sort.inter_insert_sort(dst)
