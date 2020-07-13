#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class ConvertIntToString
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "ConvertIntToString"));
	}

	template <typename T = uintptr_t> T& intVariable() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& stringVariable() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& format() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(ConvertIntToString*))(Il2CppBase() + 0x4FBE220))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(ConvertIntToString*))(Il2CppBase() + 0x4FBE238))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(ConvertIntToString*))(Il2CppBase() + 0x4FBE3FC))(this);
	}
	template <typename T = void> T DoConvertIntToString() {
		return ((T (*)(ConvertIntToString*))(Il2CppBase() + 0x4FBE264))(this);
	}

};

}
