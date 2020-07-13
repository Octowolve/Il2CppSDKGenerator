#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class MapModuleData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "MapModuleData"));
	}

	template <typename T = Il2CppString*> T& MapModuleName() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& Levels() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T Serialize(uintptr_t bw) {
		return ((T (*)(MapModuleData*, uintptr_t))(Il2CppBase() + 0x4AA5604))(this, bw);
	}
	template <typename T = void> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(MapModuleData*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4AA5840))(this, bytes, position);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(MapModuleData*))(Il2CppBase() + 0x4AA5B7C))(this);
	}

};

}
