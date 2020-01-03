module Lib where

foreign export ccall plusOne :: Int -> IO Int

plusOne :: Int -> IO Int
plusOne x = return $ x + 1
