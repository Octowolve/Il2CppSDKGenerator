#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class GameModeConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "GameModeConfig"));
	}

	template <typename T = Il2CppString*> static T& kGameModeWildcard() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& Gamemode_main() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& Gamemode_sub() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& Gamemode_detail() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& Category() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& Framerate_max_ios() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& Fixedframerate_max_ios() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& Framerate_max_android() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& Fixedframerate_max_android() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& Framerate_veryhigh_ios() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& Fixedframerate_veryhigh_ios() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& Framerate_veryhigh_android() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& Fixedframerate_veryhigh_android() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& Framerate_high_ios() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& Fixedframerate_high_ios() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& Framerate_high_android() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& Fixedframerate_high_android() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& Framerate_middle_ios() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& Fixedframerate_middle_ios() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& Framerate_middle_android() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& Fixedframerate_middle_android() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& Framerate_low_ios() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& Fixedframerate_low_ios() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& Framerate_low_android() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> T& Fixedframerate_low_android() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGameModeConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFixedFrameRate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFrameRate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGameModeCategory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrimaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSecondaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTertiaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = uintptr_t> static T GetGameModeConfig(uintptr_t gameMode) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4646A54))(0, gameMode);
	}
	template <typename T = int32_t> static T GetFixedFrameRate(uintptr_t gameMode, uintptr_t rateLevel) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4646E2C))(0, gameMode, rateLevel);
	}
	template <typename T = int32_t> static T GetFrameRate(uintptr_t gameMode, uintptr_t rateLevel) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4647190))(0, gameMode, rateLevel);
	}
	template <typename T = uintptr_t> static T GetGameModeCategory(uintptr_t gameMode) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x46474F0))(0, gameMode);
	}
	template <typename T = Il2CppString*> T GetPrimaryKeyValue() {
		return ((T (*)(GameModeConfig*))(Il2CppBase() + 0x4647610))(this);
	}
	template <typename T = Il2CppString*> T GetSecondaryKeyValue() {
		return ((T (*)(GameModeConfig*))(Il2CppBase() + 0x46476B8))(this);
	}
	template <typename T = Il2CppString*> T GetTertiaryKeyValue() {
		return ((T (*)(GameModeConfig*))(Il2CppBase() + 0x4647760))(this);
	}
	template <typename T = Il2CppString*> T get_Gamemode_main() {
		return ((T (*)(GameModeConfig*))(Il2CppBase() + 0x46476B0))(this);
	}
	template <typename T = void> T set_Gamemode_main(Il2CppString* value) {
		return ((T (*)(GameModeConfig*, Il2CppString*))(Il2CppBase() + 0x4647808))(this, value);
	}
	template <typename T = Il2CppString*> T get_Gamemode_sub() {
		return ((T (*)(GameModeConfig*))(Il2CppBase() + 0x4647758))(this);
	}
	template <typename T = void> T set_Gamemode_sub(Il2CppString* value) {
		return ((T (*)(GameModeConfig*, Il2CppString*))(Il2CppBase() + 0x4647810))(this, value);
	}
	template <typename T = Il2CppString*> T get_Gamemode_detail() {
		return ((T (*)(GameModeConfig*))(Il2CppBase() + 0x4647800))(this);
	}
	template <typename T = void> T set_Gamemode_detail(Il2CppString* value) {
		return ((T (*)(GameModeConfig*, Il2CppString*))(Il2CppBase() + 0x4647818))(this, value);
	}
	template <typename T = Il2CppString*> T get_Category() {
		return ((T (*)(GameModeConfig*))(Il2CppBase() + 0x4647608))(this);
	}
	template <typename T = void> T set_Category(Il2CppString* value) {
		return ((T (*)(GameModeConfig*, Il2CppString*))(Il2CppBase() + 0x4647820))(this, value);
	}
	template <typename T = int32_t> T get_Framerate_max_ios() {
		return ((T (*)(GameModeConfig*))(Il2CppBase() + 0x46474A0))(this);
	}
	template <typename T = void> T set_Framerate_max_ios(int32_t value) {
		return ((T (*)(GameModeConfig*, int32_t))(Il2CppBase() + 0x4647828))(this, value);
	}
	template <typename T = int32_t> T get_Fixedframerate_max_ios() {
		return ((T (*)(GameModeConfig*))(Il2CppBase() + 0x4647140))(this);
	}
	template <typename T = void> T set_Fixedframerate_max_ios(int32_t value) {
		return ((T (*)(GameModeConfig*, int32_t))(Il2CppBase() + 0x4647830))(this, value);
	}
	template <typename T = int32_t> T get_Framerate_max_android() {
		return ((T (*)(GameModeConfig*))(Il2CppBase() + 0x46474A8))(this);
	}
	template <typename T = void> T set_Framerate_max_android(int32_t value) {
		return ((T (*)(GameModeConfig*, int32_t))(Il2CppBase() + 0x4647838))(this, value);
	}
	template <typename T = int32_t> T get_Fixedframerate_max_android() {
		return ((T (*)(GameModeConfig*))(Il2CppBase() + 0x4647148))(this);
	}
	template <typename T = void> T set_Fixedframerate_max_android(int32_t value) {
		return ((T (*)(GameModeConfig*, int32_t))(Il2CppBase() + 0x4647840))(this, value);
	}
	template <typename T = int32_t> T get_Framerate_veryhigh_ios() {
		return ((T (*)(GameModeConfig*))(Il2CppBase() + 0x46474B0))(this);
	}
	template <typename T = void> T set_Framerate_veryhigh_ios(int32_t value) {
		return ((T (*)(GameModeConfig*, int32_t))(Il2CppBase() + 0x4647848))(this, value);
	}
	template <typename T = int32_t> T get_Fixedframerate_veryhigh_ios() {
		return ((T (*)(GameModeConfig*))(Il2CppBase() + 0x4647150))(this);
	}
	template <typename T = void> T set_Fixedframerate_veryhigh_ios(int32_t value) {
		return ((T (*)(GameModeConfig*, int32_t))(Il2CppBase() + 0x4647850))(this, value);
	}
	template <typename T = int32_t> T get_Framerate_veryhigh_android() {
		return ((T (*)(GameModeConfig*))(Il2CppBase() + 0x46474B8))(this);
	}
	template <typename T = void> T set_Framerate_veryhigh_android(int32_t value) {
		return ((T (*)(GameModeConfig*, int32_t))(Il2CppBase() + 0x4647858))(this, value);
	}
	template <typename T = int32_t> T get_Fixedframerate_veryhigh_android() {
		return ((T (*)(GameModeConfig*))(Il2CppBase() + 0x4647158))(this);
	}
	template <typename T = void> T set_Fixedframerate_veryhigh_android(int32_t value) {
		return ((T (*)(GameModeConfig*, int32_t))(Il2CppBase() + 0x4647860))(this, value);
	}
	template <typename T = int32_t> T get_Framerate_high_ios() {
		return ((T (*)(GameModeConfig*))(Il2CppBase() + 0x46474C0))(this);
	}
	template <typename T = void> T set_Framerate_high_ios(int32_t value) {
		return ((T (*)(GameModeConfig*, int32_t))(Il2CppBase() + 0x4647868))(this, value);
	}
	template <typename T = int32_t> T get_Fixedframerate_high_ios() {
		return ((T (*)(GameModeConfig*))(Il2CppBase() + 0x4647160))(this);
	}
	template <typename T = void> T set_Fixedframerate_high_ios(int32_t value) {
		return ((T (*)(GameModeConfig*, int32_t))(Il2CppBase() + 0x4647870))(this, value);
	}
	template <typename T = int32_t> T get_Framerate_high_android() {
		return ((T (*)(GameModeConfig*))(Il2CppBase() + 0x46474C8))(this);
	}
	template <typename T = void> T set_Framerate_high_android(int32_t value) {
		return ((T (*)(GameModeConfig*, int32_t))(Il2CppBase() + 0x4647878))(this, value);
	}
	template <typename T = int32_t> T get_Fixedframerate_high_android() {
		return ((T (*)(GameModeConfig*))(Il2CppBase() + 0x4647168))(this);
	}
	template <typename T = void> T set_Fixedframerate_high_android(int32_t value) {
		return ((T (*)(GameModeConfig*, int32_t))(Il2CppBase() + 0x4647880))(this, value);
	}
	template <typename T = int32_t> T get_Framerate_middle_ios() {
		return ((T (*)(GameModeConfig*))(Il2CppBase() + 0x46474D0))(this);
	}
	template <typename T = void> T set_Framerate_middle_ios(int32_t value) {
		return ((T (*)(GameModeConfig*, int32_t))(Il2CppBase() + 0x4647888))(this, value);
	}
	template <typename T = int32_t> T get_Fixedframerate_middle_ios() {
		return ((T (*)(GameModeConfig*))(Il2CppBase() + 0x4647170))(this);
	}
	template <typename T = void> T set_Fixedframerate_middle_ios(int32_t value) {
		return ((T (*)(GameModeConfig*, int32_t))(Il2CppBase() + 0x4647890))(this, value);
	}
	template <typename T = int32_t> T get_Framerate_middle_android() {
		return ((T (*)(GameModeConfig*))(Il2CppBase() + 0x46474D8))(this);
	}
	template <typename T = void> T set_Framerate_middle_android(int32_t value) {
		return ((T (*)(GameModeConfig*, int32_t))(Il2CppBase() + 0x4647898))(this, value);
	}
	template <typename T = int32_t> T get_Fixedframerate_middle_android() {
		return ((T (*)(GameModeConfig*))(Il2CppBase() + 0x4647178))(this);
	}
	template <typename T = void> T set_Fixedframerate_middle_android(int32_t value) {
		return ((T (*)(GameModeConfig*, int32_t))(Il2CppBase() + 0x46478A0))(this, value);
	}
	template <typename T = int32_t> T get_Framerate_low_ios() {
		return ((T (*)(GameModeConfig*))(Il2CppBase() + 0x46474E0))(this);
	}
	template <typename T = void> T set_Framerate_low_ios(int32_t value) {
		return ((T (*)(GameModeConfig*, int32_t))(Il2CppBase() + 0x46478A8))(this, value);
	}
	template <typename T = int32_t> T get_Fixedframerate_low_ios() {
		return ((T (*)(GameModeConfig*))(Il2CppBase() + 0x4647180))(this);
	}
	template <typename T = void> T set_Fixedframerate_low_ios(int32_t value) {
		return ((T (*)(GameModeConfig*, int32_t))(Il2CppBase() + 0x46478B0))(this, value);
	}
	template <typename T = int32_t> T get_Framerate_low_android() {
		return ((T (*)(GameModeConfig*))(Il2CppBase() + 0x46474E8))(this);
	}
	template <typename T = void> T set_Framerate_low_android(int32_t value) {
		return ((T (*)(GameModeConfig*, int32_t))(Il2CppBase() + 0x46478B8))(this, value);
	}
	template <typename T = int32_t> T get_Fixedframerate_low_android() {
		return ((T (*)(GameModeConfig*))(Il2CppBase() + 0x4647188))(this);
	}
	template <typename T = void> T set_Fixedframerate_low_android(int32_t value) {
		return ((T (*)(GameModeConfig*, int32_t))(Il2CppBase() + 0x46478C0))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(GameModeConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x46478C8))(this, bytes, position);
	}

};

}
