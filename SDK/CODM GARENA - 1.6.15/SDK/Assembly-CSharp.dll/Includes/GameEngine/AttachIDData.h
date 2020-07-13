#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class AttachIDData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "AttachIDData"));
	}

	template <typename T = Il2CppDictionary<int32_t, Il2CppList<int32_t>*>*> T& AssetAttachDict() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Serialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Serialize(uintptr_t bw) {
		return ((T (*)(AttachIDData*, uintptr_t))(Il2CppBase() + 0x35CC8CC))(this, bw);
	}
	template <typename T = void> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(AttachIDData*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x35CCB60))(this, bytes, position);
	}

};

}
