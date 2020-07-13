#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RenderHeads.Media.AVProVideo {

class Stream
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RenderHeads.Media.AVProVideo", "Stream"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = int32_t> T get_Width() {
		return ((T (*)(Stream*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T get_Height() {
		return ((T (*)(Stream*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T get_Bandwidth() {
		return ((T (*)(Stream*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_URL() {
		return ((T (*)(Stream*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetAllChunks() {
		return ((T (*)(Stream*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetChunks() {
		return ((T (*)(Stream*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetAllStreams() {
		return ((T (*)(Stream*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetStreams() {
		return ((T (*)(Stream*))(Il2CppBase() + 0x0))(this);
	}

};

}
