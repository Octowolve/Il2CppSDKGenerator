#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WeaponStorage {

class AttachmentReplaceWindowView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "WeaponStorage", "AttachmentReplaceWindowView"));
	}

	template <typename T = uintptr_t> T& LeftRoot() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& RightRoot() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& ReplaceGo() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& ConflictGo() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetReplaceView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T SetReplaceView(bool isReplace) {
		return ((T (*)(AttachmentReplaceWindowView*, bool))(Il2CppBase() + 0x4C57A10))(this, isReplace);
	}

};

}
