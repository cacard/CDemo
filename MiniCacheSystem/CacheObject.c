
struct CacheObject
{
    char * key;

    int len; // data�ĳ���
    char * data; // �ɴ�Ŷ���������

    int CreateTimeTick; // ����ʱ��
    int ExpirationTimeTick; // ʧЧʱ��
    int GetRequestCount; // �����ȡ�Ĵ���
    int SetRequestCount; // ��������ֵ�Ĵ���
};
