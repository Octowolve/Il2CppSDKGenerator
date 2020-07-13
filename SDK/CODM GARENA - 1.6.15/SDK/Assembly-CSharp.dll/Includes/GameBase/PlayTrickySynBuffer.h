#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class PlayTrickySynBuffer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "PlayTrickySynBuffer"));
	}

	template <typename T = unsigned char> T& IsPlay() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& Length() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Serialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Unserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T Serialize(uintptr_t writer) {
		return ((T (*)(PlayTrickySynBuffer*, uintptr_t))(Il2CppBase() + 0x1709FB8))(this, writer);
	}
	template <typename T = void> T Unserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(PlayTrickySynBuffer*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x170A0E4))(this, bytes, position);
	}

};

}
