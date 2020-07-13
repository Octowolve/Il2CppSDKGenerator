#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class BRBroadcastStyleConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "BRBroadcastStyleConfig"));
	}

	template <typename T = uint32_t> T& ID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& TemplateID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& Color() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& Icon() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& LOCID_BroadcastText() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& SubIcon() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& ShowTime() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& EffectName() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& OffEffectTime() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uint32_t> T& AudioClipID() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrimaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uint32_t> T GetPrimaryKeyValue() {
		return ((T (*)(BRBroadcastStyleConfig*))(Il2CppBase() + 0x2D4337C))(this);
	}
	template <typename T = uint32_t> T get_ID() {
		return ((T (*)(BRBroadcastStyleConfig*))(Il2CppBase() + 0x2D4341C))(this);
	}
	template <typename T = void> T set_ID(uint32_t value) {
		return ((T (*)(BRBroadcastStyleConfig*, uint32_t))(Il2CppBase() + 0x2D43424))(this, value);
	}
	template <typename T = uint32_t> T get_TemplateID() {
		return ((T (*)(BRBroadcastStyleConfig*))(Il2CppBase() + 0x2D4342C))(this);
	}
	template <typename T = void> T set_TemplateID(uint32_t value) {
		return ((T (*)(BRBroadcastStyleConfig*, uint32_t))(Il2CppBase() + 0x2D43434))(this, value);
	}
	template <typename T = uint32_t> T get_Color() {
		return ((T (*)(BRBroadcastStyleConfig*))(Il2CppBase() + 0x2D4343C))(this);
	}
	template <typename T = void> T set_Color(uint32_t value) {
		return ((T (*)(BRBroadcastStyleConfig*, uint32_t))(Il2CppBase() + 0x2D43444))(this, value);
	}
	template <typename T = Il2CppString*> T get_Icon() {
		return ((T (*)(BRBroadcastStyleConfig*))(Il2CppBase() + 0x2D4344C))(this);
	}
	template <typename T = void> T set_Icon(Il2CppString* value) {
		return ((T (*)(BRBroadcastStyleConfig*, Il2CppString*))(Il2CppBase() + 0x2D43454))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_BroadcastText() {
		return ((T (*)(BRBroadcastStyleConfig*))(Il2CppBase() + 0x2D4345C))(this);
	}
	template <typename T = void> T set_LOCID_BroadcastText(Il2CppString* value) {
		return ((T (*)(BRBroadcastStyleConfig*, Il2CppString*))(Il2CppBase() + 0x2D43464))(this, value);
	}
	template <typename T = Il2CppString*> T get_BroadcastText() {
		return ((T (*)(BRBroadcastStyleConfig*))(Il2CppBase() + 0x2D4346C))(this);
	}
	template <typename T = Il2CppString*> T get_SubIcon() {
		return ((T (*)(BRBroadcastStyleConfig*))(Il2CppBase() + 0x2D4347C))(this);
	}
	template <typename T = void> T set_SubIcon(Il2CppString* value) {
		return ((T (*)(BRBroadcastStyleConfig*, Il2CppString*))(Il2CppBase() + 0x2D43484))(this, value);
	}
	template <typename T = float> T get_ShowTime() {
		return ((T (*)(BRBroadcastStyleConfig*))(Il2CppBase() + 0x2D4348C))(this);
	}
	template <typename T = void> T set_ShowTime(float value) {
		return ((T (*)(BRBroadcastStyleConfig*, float))(Il2CppBase() + 0x2D43494))(this, value);
	}
	template <typename T = Il2CppString*> T get_EffectName() {
		return ((T (*)(BRBroadcastStyleConfig*))(Il2CppBase() + 0x2D4349C))(this);
	}
	template <typename T = void> T set_EffectName(Il2CppString* value) {
		return ((T (*)(BRBroadcastStyleConfig*, Il2CppString*))(Il2CppBase() + 0x2D434A4))(this, value);
	}
	template <typename T = float> T get_OffEffectTime() {
		return ((T (*)(BRBroadcastStyleConfig*))(Il2CppBase() + 0x2D434AC))(this);
	}
	template <typename T = void> T set_OffEffectTime(float value) {
		return ((T (*)(BRBroadcastStyleConfig*, float))(Il2CppBase() + 0x2D434B4))(this, value);
	}
	template <typename T = uint32_t> T get_AudioClipID() {
		return ((T (*)(BRBroadcastStyleConfig*))(Il2CppBase() + 0x2D434BC))(this);
	}
	template <typename T = void> T set_AudioClipID(uint32_t value) {
		return ((T (*)(BRBroadcastStyleConfig*, uint32_t))(Il2CppBase() + 0x2D434C4))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(BRBroadcastStyleConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2D434CC))(this, bytes, position);
	}

};

}
