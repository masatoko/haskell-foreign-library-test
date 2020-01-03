module Lib where

foreign export ccall plus_one :: Int -> IO Int

plus_one :: Int -> IO Int
plus_one x = return $ x + 1
