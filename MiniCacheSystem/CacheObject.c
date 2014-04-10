
struct CacheObject
{
    char * key;

    int len; // data的长度
    char * data; // 可存放二进制序列

    int CreateTimeTick; // 创建时间
    int ExpirationTimeTick; // 失效时间
    int GetRequestCount; // 请求获取的次数
    int SetRequestCount; // 请求设置值的次数
};
