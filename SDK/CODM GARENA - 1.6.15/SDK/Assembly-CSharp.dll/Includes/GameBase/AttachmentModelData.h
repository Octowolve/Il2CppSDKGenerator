#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class AttachmentModelData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "AttachmentModelData"));
	}

	template <typename T = int32_t> T& ID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& AssetID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& Go() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& DeactiveGO() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& Socket() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& HasRecycle() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRecycle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = bool> T get_HasRecycle() {
		return ((T (*)(AttachmentModelData*))(Il2CppBase() + 0x3B90EAC))(this);
	}
	template <typename T = void> T set_HasRecycle(bool value) {
		return ((T (*)(AttachmentModelData*, bool))(Il2CppBase() + 0x3B90EB4))(this, value);
	}
	template <typename T = void> T OnRecycle() {
		return ((T (*)(AttachmentModelData*))(Il2CppBase() + 0x3B90EBC))(this);
	}

};

}
