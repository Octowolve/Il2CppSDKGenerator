#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RenderHeads.Media.AVProVideo {

class IMediaSubtitles
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RenderHeads.Media.AVProVideo", "IMediaSubtitles"));
	}


	template <typename T = bool> T LoadSubtitlesSRT(Il2CppString* data) {
		return ((T (*)(IMediaSubtitles*, Il2CppString*))(Il2CppBase() + 0x0))(this, data);
	}
	template <typename T = int32_t> T GetSubtitleIndex() {
		return ((T (*)(IMediaSubtitles*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T GetSubtitleText() {
		return ((T (*)(IMediaSubtitles*))(Il2CppBase() + 0x0))(this);
	}

};

}
