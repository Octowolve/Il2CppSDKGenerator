#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RenderHeads.Media.AVProVideo {

class IMediaProducer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RenderHeads.Media.AVProVideo", "IMediaProducer"));
	}


	template <typename T = int32_t> T GetTextureCount() {
		return ((T (*)(IMediaProducer*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T GetTexture(int32_t index) {
		return ((T (*)(IMediaProducer*, int32_t))(Il2CppBase() + 0x0))(this, index);
	}
	template <typename T = int32_t> T GetTextureFrameCount() {
		return ((T (*)(IMediaProducer*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T SupportsTextureFrameCount() {
		return ((T (*)(IMediaProducer*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int64_t> T GetTextureTimeStamp() {
		return ((T (*)(IMediaProducer*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T RequiresVerticalFlip() {
		return ((T (*)(IMediaProducer*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T GetYpCbCrTransform() {
		return ((T (*)(IMediaProducer*))(Il2CppBase() + 0x0))(this);
	}

};

}
