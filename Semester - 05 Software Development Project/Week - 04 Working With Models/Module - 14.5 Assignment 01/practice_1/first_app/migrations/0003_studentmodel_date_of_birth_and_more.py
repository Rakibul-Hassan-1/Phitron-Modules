# Generated by Django 5.0.4 on 2024-05-03 05:41

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('first_app', '0002_alter_studentmodel_fathers_name'),
    ]

    operations = [
        migrations.AddField(
            model_name='studentmodel',
            name='date_of_birth',
            field=models.DateField(default=0.0004940711462450593),
            preserve_default=False,
        ),
        migrations.AlterField(
            model_name='studentmodel',
            name='fathers_name',
            field=models.CharField(default='Jahangir Alam', max_length=20),
        ),
    ]
