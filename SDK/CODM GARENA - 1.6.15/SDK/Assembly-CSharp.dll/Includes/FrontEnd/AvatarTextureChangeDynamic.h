#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class AvatarTextureChangeDynamic
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "AvatarTextureChangeDynamic"));
	}

	template <typename T = uintptr_t> T& m_Material() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_Material_Low() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& m_TextureName() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& MaterialPath() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& MaterialPath_Low() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeMainTexture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(AvatarTextureChangeDynamic*))(Il2CppBase() + 0x28E3EA4))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(AvatarTextureChangeDynamic*))(Il2CppBase() + 0x28E3F48))(this);
	}
	template <typename T = void> T ChangeMainTexture(Il2CppString* textureName, uintptr_t itemType, uint32_t itemId) {
		return ((T (*)(AvatarTextureChangeDynamic*, Il2CppString*, uintptr_t, uint32_t))(Il2CppBase() + 0x28E4274))(this, textureName, itemType, itemId);
	}

};

}
