#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RenderHeads.Media.AVProVideo {

class IMediaPlayer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RenderHeads.Media.AVProVideo", "IMediaPlayer"));
	}


	template <typename T = void> T OnEnable() {
		return ((T (*)(IMediaPlayer*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(IMediaPlayer*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Render() {
		return ((T (*)(IMediaPlayer*))(Il2CppBase() + 0x0))(this);
	}

};

}
