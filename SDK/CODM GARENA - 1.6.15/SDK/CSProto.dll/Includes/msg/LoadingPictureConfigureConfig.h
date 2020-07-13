#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class LoadingPictureConfigureConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "LoadingPictureConfigureConfig"));
	}

	template <typename T = uint32_t> T& _Index() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& _BNoviceGuide() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& _BFullScreen() {
		return *(T*)((uintptr_t)this + 0xD);
	}
	template <typename T = bool> T& _BCdn() {
		return *(T*)((uintptr_t)this + 0xE);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _SpritePath() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<int32_t>*> T& _Width() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<float>*> T& _X() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<float>*> T& _Y() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppList<float>*> T& _Z() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& _Pivot() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& _Alignment() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppList<uint32_t>*> T& _FontSize() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppList<uint32_t>*> T& _FontStyle() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppList<bool>*> T& _IsShowBlock() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppList<Il2CppArray<uintptr_t>*>*> T& _LocId_Desc() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x3C);
	}

	template <typename T = uint32_t> T get_Index() {
		return ((T (*)(LoadingPictureConfigureConfig*))(Il2CppBase() + 0x4EA2C64))(this);
	}
	template <typename T = void> T set_Index(uint32_t value) {
		return ((T (*)(LoadingPictureConfigureConfig*, uint32_t))(Il2CppBase() + 0x4EA2C6C))(this, value);
	}
	template <typename T = bool> T get_BNoviceGuide() {
		return ((T (*)(LoadingPictureConfigureConfig*))(Il2CppBase() + 0x4EA2C74))(this);
	}
	template <typename T = void> T set_BNoviceGuide(bool value) {
		return ((T (*)(LoadingPictureConfigureConfig*, bool))(Il2CppBase() + 0x4EA2C7C))(this, value);
	}
	template <typename T = bool> T get_BFullScreen() {
		return ((T (*)(LoadingPictureConfigureConfig*))(Il2CppBase() + 0x4EA2C84))(this);
	}
	template <typename T = void> T set_BFullScreen(bool value) {
		return ((T (*)(LoadingPictureConfigureConfig*, bool))(Il2CppBase() + 0x4EA2C8C))(this, value);
	}
	template <typename T = bool> T get_BCdn() {
		return ((T (*)(LoadingPictureConfigureConfig*))(Il2CppBase() + 0x4EA2C94))(this);
	}
	template <typename T = void> T set_BCdn(bool value) {
		return ((T (*)(LoadingPictureConfigureConfig*, bool))(Il2CppBase() + 0x4EA2C9C))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_SpritePath() {
		return ((T (*)(LoadingPictureConfigureConfig*))(Il2CppBase() + 0x4EA2CA4))(this);
	}
	template <typename T = void> T set_SpritePath(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(LoadingPictureConfigureConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4EA2CAC))(this, value);
	}
	template <typename T = Il2CppList<int32_t>*> T get_Width() {
		return ((T (*)(LoadingPictureConfigureConfig*))(Il2CppBase() + 0x4EA2CB4))(this);
	}
	template <typename T = Il2CppList<float>*> T get_X() {
		return ((T (*)(LoadingPictureConfigureConfig*))(Il2CppBase() + 0x4EA2CBC))(this);
	}
	template <typename T = Il2CppList<float>*> T get_Y() {
		return ((T (*)(LoadingPictureConfigureConfig*))(Il2CppBase() + 0x4EA2CC4))(this);
	}
	template <typename T = Il2CppList<float>*> T get_Z() {
		return ((T (*)(LoadingPictureConfigureConfig*))(Il2CppBase() + 0x4EA2CCC))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T get_Pivot() {
		return ((T (*)(LoadingPictureConfigureConfig*))(Il2CppBase() + 0x4EA2CD4))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T get_Alignment() {
		return ((T (*)(LoadingPictureConfigureConfig*))(Il2CppBase() + 0x4EA2CDC))(this);
	}
	template <typename T = Il2CppList<uint32_t>*> T get_FontSize() {
		return ((T (*)(LoadingPictureConfigureConfig*))(Il2CppBase() + 0x4EA2CE4))(this);
	}
	template <typename T = Il2CppList<uint32_t>*> T get_FontStyle() {
		return ((T (*)(LoadingPictureConfigureConfig*))(Il2CppBase() + 0x4EA2CEC))(this);
	}
	template <typename T = Il2CppList<bool>*> T get_IsShowBlock() {
		return ((T (*)(LoadingPictureConfigureConfig*))(Il2CppBase() + 0x4EA2CF4))(this);
	}
	template <typename T = Il2CppList<Il2CppArray<uintptr_t>*>*> T get_LocId_Desc() {
		return ((T (*)(LoadingPictureConfigureConfig*))(Il2CppBase() + 0x4EA2CFC))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(LoadingPictureConfigureConfig*, bool))(Il2CppBase() + 0x4EA2D04))(this, createIfMissing);
	}

};

}
