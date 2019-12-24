#include <SFML/Graphics/Texture.hpp>
#include <SFML/Graphics/Font.hpp>
#include <SFML/Audio/SoundBuffer.hpp>
#include <string>
#include <vector>
#include <map>

namespace TstBits
{

    #define TEXTURE_PATH    "Resources/Textures/"
    #define FONT_PATH       "Resources/Fonts/"
    #define SOUND_PATH      "Resources/Sounds/"
    #define CONFIG_PATH     "Resources/Configs/"

    class ResourceManager
    {
    public:
        ResourceManager();
        ~ResourceManager();
        sf::Texture& LoadTexture(std::string);
        sf::Font& LoadFont(std::string);
        sf::SoundBuffer& LoadAudioClip(std::string);
        sf::string LoadConfigFile(std::string);
        void UnloadTexture(std::string);
        void UnloadFont(std::string);
        void UnloadAudioClip(std::string);
        void UnloadAll();
    private:
        static std::map<std::string, sf::Texture&> m_textures;
        static std::map<std::string, sf::Font&> m_fonts;
        static std::map<std::string, sf::SoundBuffer&> m_audioClips;
        static std::vector<std::string> m_textureIds;
        static std::vector<std::string> m_fontIds;
        static std::vector<std::string> m_audioClipIds;
    };
}
