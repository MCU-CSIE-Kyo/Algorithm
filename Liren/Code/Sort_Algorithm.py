class SortAlgorithm:
    min_index = 0
    temp = 0
    def select_sort(self, sort_list:list):
        """
        選擇排序法
        第一層 for 是走訪全部的 element
        第二層 for 是走訪該點(第一層定位)往後的 element，並找出最小的 index
        然後進行交換，當第一層全部走訪結束時，選擇排序即結束

        Args:
            sort_list (list): 要排序的陣列
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
            print(sort_list)
data = [6, 4, 1, 0, 5]
sort = SortAlgorithm()
sort.select_sort(data)