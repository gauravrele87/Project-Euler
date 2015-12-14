# -*- coding: utf-8 -*-

import pandas as pd


dateList  = pd.DataFrame(pd.date_range('1901-01-01','2000-12-31'),columns = ['Dates'])
dateList['weekday'] = dateList['Dates'].dt.dayofweek
dateList['day'] = dateList['Dates'].dt.day

print(len(dateList[(dateList['weekday']==1) & (dateList['day'] == 1)]))

