namespace TstBits
{
    class Process
    {
    public:
        Process();
        virtual ~Process() = default;
        virtual bool OnStart() = 0;
        //virtual bool OnUpdate(float) = 0;
        virtual bool OnStop(int) = 0;
        
        virtual bool OnPause() { m_isPaused = true; }
        virtual bool OnResume() { m_isPaused = false; }
        inline bool IsRunning() { return !m_isPaused; }
    private:
        bool m_isRunning;
    };
}
