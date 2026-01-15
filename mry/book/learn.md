# 1 语言模型基础
## 1.1 基于统计方法的模型
## 1.3 基于Transformer的语言模型
# 3 Prompt 工程
## 3.1 Prompt 工程简介
- prompt：清晰说明任务，使得生成式人工智能生成理想的内容
- Prompt工程：设计优化用于与生成式人工智能交互的prompt的过程
- 良好的prompt；
    - 任务说明
    - 上下文
    - 问题
    - 格式
- 技巧和技术：
    - IN-context learning
    - CoT 
- promopt分词向量化
    - prompt文本-tokens-model-tokens-output
    1. 利用分词算法建立词表
    2. tokenization：分词器
    3. tokens：embedding matrix
- 意义：
    1. 避免针对每个任务微调
    2. 数据增强:合成新的数据集
    3. 智能代理：感知环境，自主采取行动来完成目标